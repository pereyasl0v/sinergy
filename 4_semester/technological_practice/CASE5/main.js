const yearBlock = document.querySelector('.year');
const monthBlock = document.querySelector('.month');
const dayBlock = document.querySelector('.day');
const yearInput = document.querySelector('.year-input')
const monthInput = document.querySelector('.month-input')
const dayInput = document.querySelector('.day-input')
const dayOfWeekBlock = document.querySelector('.day-of-week');
const leapYearBlock = document.querySelector('.leap-year');
const ageBlock = document.querySelector('.age');
const result = document.querySelector('.result')


let year;
let month;
let day;
let hbDate;
let leapYear;
let yearOutput = [];
let monthOutput = [];
let dayOutput = [];
let now = new Date();

function setYear(){
    year = Number(yearInput.value);

    if((year>now.getFullYear() )){
        yearInput.value = 'Введите корректный год.'
    }else{
    yearBlock.style.display = 'none';
    monthBlock.style.display = 'flex';
}
}
function setMonth(){
    month = Number(monthInput.value)-1;

    if((year==now.getFullYear() && month>now.getMonth()) || month>11 || month<0 ){
        monthInput.value = 'Введите корректный месяц.'
    }else{
    monthBlock.style.display = 'none';
    dayBlock.style.display = 'flex';
    }

}
function setDay(){
    day = Number(dayInput.value);

        if((year==now.getFullYear() && month==now.getMonth() &&  day>now.getDate())  || day>31 || day<1 ){
                dayInput.value = 'Введите корректный день.'
            }else{
    setDate();

    dayBlock.style.display = 'none';
            }
}


function setDate(){
    result.style.display = 'flex';
    hbDate = new Date(year,month,day);

    let age = now.getFullYear() - hbDate.getFullYear();
    let m = now.getMonth() - hbDate.getMonth();
    if (m < 0 || (m === 0 && now.getDate() < hbDate.getDate())) {
        age--;
    }


    if((hbDate.getFullYear()%400==0) || ((hbDate.getFullYear()%4==0)&&(hbDate.getFullYear()%100!=0))){
     leapYear = 'високосным';
    }  
    else{
    leapYear = 'невисокосным'
    }
    
    let dayOfWeek = hbDate.getDay();
    
    switch(dayOfWeek){
        case 0:
                dayOfWeek = 'воскресенье';
            break;
         case 1:
                dayOfWeek = 'понедельник';
            break;
         case 2:
                dayOfWeek = 'вторник';
            break;
         case 3:
                dayOfWeek = 'среда';
            break;
         case 4:
                dayOfWeek = 'четверг';
            break;
         case 5:
                dayOfWeek = 'пятница';
            break;
         case 6:
                dayOfWeek = 'суббота';
            break;
    }


    leapYearBlock.innerText = `Год был ${leapYear}.`;
    dayOfWeekBlock.innerText = `День недели: ${dayOfWeek}.`;
    ageBlock.innerText = `Возраст: ${age}.`;
    output();
}


let numbers = {
0:`
*   *   *
*       *
*       *
*       *
*   *   *`,
1:`
*
*
*
*
*`, 
2:`
*   *   *
        *
*   *   *
*
*   *   *`, 
3:`
*   *   *
        *
*   *   *
        *
*   *   *`, 
4:`
*       *
*       *
*   *   *
        *
        *`,
5:`
*   *   *
*
*   *   *
        *
*   *   *`, 
6:`
*   *   *
*
*   *   *
*       *
*   *   *`, 
7:`
*   *   *
*       *
        *
        *
        *`,
8:`
*   *   *
*       *
*   *   *
*       *
*   *   *`, 
9:`
*   *   *
*       *
*   *   *
        *
*   *   *`, 
}


function output(){
        year = String(year);
        month = String(month+1);
        day = String(day);

  

        
        for(key of year){
                yearOutput.push(key);        
        }
        for(key of month){
                monthOutput.push(key);        
        }
        for(key of day){
                dayOutput.push(key);        
        }

        yearOutput = yearOutput.map((elem)=>{
                return numbers[elem]
        })

        monthOutput = monthOutput.map((elem)=>{
                return numbers[elem]
        })

        dayOutput = dayOutput.map((elem)=>{
                return numbers[elem]
        })

        let endString = [...yearOutput , [`     *       *       `], ...monthOutput , [`     *       *       `], ...dayOutput];

        for(key of endString){
                console.log(`${key}`);
        }



}