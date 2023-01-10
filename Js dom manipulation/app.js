const text = document.querySelector(".title");
const changeColor = document.querySelector(".changeColor");
const userList = document.querySelector(".name-list");
const users = document.querySelectorAll(".name-list li")
const listInput = document.querySelector(".list-input");
const addNameBtn = document.querySelector(".add-name");

changeColor.addEventListener("click", function(){
    text.classList.toggle("change");
});

for(user of users){
   addElementEvent(user);
}

function addElementEvent(element){
    element.addEventListener("click", function(){
        this.style.color = "lightblue";
    });
}

addNameBtn.addEventListener("click", function(){
    const newLi = document.createElement("LI");
    const liContent = document.createTextNode(listInput.value);
    newLi.appendChild(liContent);
    addElementEvent(newLi);
    userList.appendChild(newLi);
});