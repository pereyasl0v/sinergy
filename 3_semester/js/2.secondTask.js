let employes = [
    {
        firstName: "Иван",
        lastName: "Иванов"
    },
    {
        firstName: "Петр",
        lastName: "Петров"
    },
    {
        firstName: "Сидр",
        lastName: "Сидоров"
    },
    {
        firstName: "Николай",
        lastName: "Николаев"
    },
    {
        firstName: "Евгений",
        lastName: "Евгеньев"
    }
];



let ol = document.createElement('ol');
document.body.append(ol);
for (let i of employes){
    let fullName = `${i.firstName} ${i.lastName}`;
    let li = document.createElement('li');
    li.innerHTML= fullName;
    ol.prepend(li);
}


