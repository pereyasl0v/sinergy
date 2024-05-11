const wrapper = document.querySelectorAll('.wrapper');
const result = document.querySelector('.result');
const firstInput = document.querySelector('.first-input');
const secondInput = document.querySelector('.second-input');
const sum = document.querySelector('.sum');
const minus = document.querySelector('.minus');
const divide = document.querySelector('.divide');
const multi = document.querySelector('.multi');
const buttons = document.querySelector('.buttons')


buttons.addEventListener('click' , (e)=>{

    if(Number(firstInput.value)&&Number(secondInput.value)!=NaN){
 

    if(e.target.className == 'sum'){
        result.innerText = `${Number(firstInput.value) + Number(secondInput.value)}`;

    }
    if(e.target.className == 'minus'){
        result.innerText = `${Number(firstInput.value) - Number(secondInput.value)}`;
    }
    if(e.target.className == 'divide'){
        if(secondInput.value == 0){
            result.innerText = `Делить на ноль нельзя`;

        }
else{
    result.innerText = `${Number(firstInput.value) / Number(secondInput.value)}`;
    }
    }
    if(e.target.className == 'multi'){
        result.innerText = `${Number(firstInput.value) * Number(secondInput.value)}`;
    }
}
else{
    
        result.innerHTML = 'Ошибка. Введите число.'
    
}
})