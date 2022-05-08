var randomNumber1 = Math.floor(Math.random() * 6) + 1;
var randimg= "dice"+randomNumber1+".png";//dice1-6.png
var imsrc="images/"+randimg;
var image1=document.querySelectorAll("img")[0];
image1.setAttribute("src",imsrc);

var randomNumber2 = Math.floor(Math.random() * 6) + 1;
var randimg2= "dice"+randomNumber2+".png";//dice1-6.png
var imsrc2="images/"+randimg2;
var image2=document.querySelectorAll("img")[1];
image2.setAttribute("src",imsrc2);

if(randomNumber1>randomNumber2)
   document.querySelector("h1").innerHTML="🚩 Player 1 wins!";
if(randomNumber2>randomNumber1)
   document.querySelector("h1").innerHTML="Player 2 wins 🚩!";
