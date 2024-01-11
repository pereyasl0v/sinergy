let flag =true;
let div = document.createElement('div');

div.style.height = '50px';
div.style.width = '50px';
div.style.backgroundColor = 'red';
div.style.borderRadius = "0%";

div.style.cssText= `
    height: 50px;
    width: 50px;
background-color: red;
border-radius: 0%;
`;

document.body.appendChild(div);


const animation_first = [
    {borderRadius: '0%' },
    {borderRadius: '50%' },
];
const animation_second = [
    {borderRadius: '50%' },
    {borderRadius: '0%' },
];

const time = {
    duration: 1000,
    iterations: 1,
};

div.addEventListener("click", () => {
    if(flag==true){
        div.animate(animation_first, time);
    div.style.borderRadius = '50%'; 
    flag=false;
    }
    else{
        div.animate(animation_second, time);
        div.style.borderRadius = '0%'; 
        flag=true;
    }
  });