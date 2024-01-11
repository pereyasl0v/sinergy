let input = document.createElement('input');
input.placeholder = 'Введите текст';

let button = document.createElement('input');
button.type = "submit";
let label = document.createElement('label');
button.value = "Сохранить";



document.body.append(input);
document.body.append(button);


button.addEventListener('click',() =>
{

localStorage.setItem('Text', input.value);
setTimeout(get, 2000 );


});
function get(){
    console.log(localStorage.getItem("Text"));
    let number = document.createElement('h1');
    number.innerHTML = localStorage.getItem("Text");
    document.body.append(number);
}

