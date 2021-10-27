for(var i=0; i<document.querySelectorAll(".drum").length;i++)
{
    document.querySelectorAll(".drum")[i].addEventListener("click", clicked);
};


function clicked()
{
    playsound(this.innerHTML);
    animation(this.innerHTML);   
}
function animation(p)
    {
        var current =document.querySelector("."+p);
        current.classList.add("pressed");
        setTimeout(function(){current.classList.remove("pressed");},200);
    }

document.addEventListener("keydown", keypad);
function keypad(event)
{
    playsound(event.key);
    animation(event.key);
} 
function playsound(x)
{
    switch (x) {
        case "f":
           var sound1= new Audio("sounds\\tom-1.mp3");
           sound1.play();
            break;
        case "a":
           var sound2= new Audio("sounds\\tom-2.mp3");
           sound2.play();
            break;
        case "s":
           var sound7= new Audio("sounds\\tom-3.mp3");
           sound7.play();
            break;
        case "d":
            var sound3=new Audio("sounds\\tom-4.mp3");
            sound3.play();
            break;
        case "j":
           var sound4= new Audio("sounds\\snare.mp3");
           sound4.play();
            break;
        case "k":
           var sound5= new Audio("sounds\\crash.mp3");
           sound5.play();
            break;
        case "l":
           var sound6= new Audio("sounds\\kick-bass.mpeg");
           sound6.play();
            break;
        
    }
    
}



