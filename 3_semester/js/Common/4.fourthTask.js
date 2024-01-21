let calculator = new Object();

calculator.sum = function(a,b){
    return (+a)+(+b);
}
calculator.diff = function(a,b){
    return (+a)-(+b);
}
calculator.mult = function(a,b){
    return (+a)*(+b);
}
calculator.div = function(a,b){
    return (+a)/(+b);
}

console.log('Сумма ', calculator.sum(10,5));
console.log('Разность ', calculator.diff(10,5));
console.log('Умножение ', calculator.mult(10,5));
console.log('Деление ', calculator.div(10,5));

let div = document.createElement('div');
div.style.display = 'block';
div.style.maxWidth = '300px';

document.body.appendChild(div);

let p = document.createElement('p');
p.innerHTML = "Выберите один из 4 режимов. 1 - Сложение  2 - Вычитание 3 - Умножение 4 - Деление";
p.style.marginBottom = '40px';
div.append(p);

let zeroInput = document.createElement('input');
zeroInput.style.marginBottom = '10px';
zeroInput.placeholder = "Число 1 - 4";
div.append(zeroInput);


let firstInput = document.createElement('input');
firstInput.style.marginBottom = '10px';
firstInput.placeholder = "Первое число";
div.append(firstInput);

let secondInput = document.createElement('input');
secondInput.placeholder = "Второе число";
secondInput.style.marginBottom = '10px';

div.append(secondInput);

let button = document.createElement('button');
button.innerHTML = "Ответ";
div.append(button);

let answer = document.createElement('h3');


button.addEventListener("click", () => {

    switch(zeroInput.value){
        case ('1'):
            answer.innerHTML = calculator.sum(firstInput.value, secondInput.value);
            break;
        case ('2'):
            answer.innerHTML  = calculator.diff(firstInput.value, secondInput.value);
            break;
        case ('3'): 
            answer.innerHTML  =calculator.mult(firstInput.value, secondInput.value);
            break;
        case ('4'):
            answer.innerHTML  = calculator.div(firstInput.value, secondInput.value);
            break;
            default:
                answer.innerHTML  = "Некорректное значение";
                console.log(zeroInput.value);
                break;
    }

});

div.append(answer);

