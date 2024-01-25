const taskList = document.querySelector('.task-list');
const task = taskList.querySelector('.task');
const taskAdd = document.querySelector('.task-add');
const taskAddContent = taskAdd.querySelector('.task-add-content');
const taskAddButton = taskAdd.querySelector('.task-add-button');
let tasks = [];


function tasksNo(){
    if(tasks.length==0){
        taskList.insertAdjacentHTML("afterbegin", `<p class="print-hello">Мы рады видеть вас в приложении Заметки.<p>`);
    }
}

if (localStorage.getItem('tasks')){
    tasks = JSON.parse(localStorage.getItem('tasks')); 
    tasks.forEach((task)=>{
        taskList.insertAdjacentHTML("afterbegin",`<tr id="${task.id}"class="task"> 
        <td class="task-content">${task.text}</td><td class="task-del">x</td>
        </tr>`);  // добавляем задачу в taskList
    });
}
tasksNo();

window.addEventListener('click', (event)=>{  //изменение заметки
    let active = document.querySelectorAll('.active'); //ищем коллекцию активных объектов

    if(event.target.className!='task-content' && event.target.className!='task-add-content active'){
    
        active.forEach((element) => {
            let index = tasks.findIndex((task) => task.id == element.parentNode.id); // ищем элемент который редактируем
            tasks[index] = {id: parseInt(element.parentNode.id), 
                             text: `${element.value}`}; //добавлем новый в массив объект по тому же айди но с новым текстом 
            element.parentNode.insertAdjacentHTML('afterbegin', `<td class="task-content">${element.value}</td>`);
            element.remove(); // вносим текст каждой задачи из input в td и удаляем input
            
            saveToLocalStorage(); //сохраянем JSON в LocalStorage
        }     

        );
        
    }
});


taskList.addEventListener('click', (event)=> {  // удаление задачи и добавление input при изменении
   
    if(event.target.className == 'task-del'){  

       id = event.target.parentNode.id; // получаем id от задачи
       let index = tasks.findIndex((task)=> task.id == id); // ищем в массиве с задачами конкретную с конкретным id
       tasks.splice(index, 1); // вырезаем эту задачу
       event.target.parentNode.remove(); // удаляем элемент со странциы
       tasksNo(); // добавляем сообщение приветствия
       saveToLocalStorage();// сохраянем JSON в LocalStorage

    }

    if(event.target.className == 'task-content'){

        event.target.parentNode.insertAdjacentHTML('afterbegin',`<input class="task-add-content active" value="${event.target.textContent}">`);
        event.target.remove(); //добавляем input и вносим туда текст из td и удаляем td задачи
     }

});

taskAdd.addEventListener('submit', (event)=>{ //отмена действий формы
    event.preventDefault(); 
});

taskAddButton.addEventListener('click', ()=>{ //добавление задачи
    taskAddContent.value.trim();
    console.log(taskAddContent.value);
if(taskAddContent.value!=''){
    taskTemp = taskAddContent.value; // добавляем значение input в временную переменную

    const newTask = { //создаем объект с задачей
        id: Date.now(),
        text: taskTemp
    };

    tasks.push(newTask); //добавляем объект в массив 

    taskList.insertAdjacentHTML("afterbegin",`<tr id="${newTask.id}"class="task"> 
    <td class="task-content">${newTask.text}</td><td class="task-del">x</td>
    </tr>`);  // добавляем задачу в taskList
  
    taskAddContent.value = ''; //удаляем текст из input
    const printHello = document.querySelector('.print-hello');
    
    const inputAnimation= [
            {backgroundColor: 'white'},
            {backgroundColor: 'grey'},
            {backgroundColor: 'white'},
    ]
    const time = {
        duration: 1000,
        iterations: 1,
    };
    taskAddButton.animate(inputAnimation, time);

   if(printHello){
    printHello.remove();
   };
    saveToLocalStorage(); // сохраянем JSON в LocalStorage
}
}
);

function saveToLocalStorage(){
    localStorage.setItem('tasks', JSON.stringify(tasks));
}

