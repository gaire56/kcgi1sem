
let myNumber1 = 10;
if (myNumber1> 0){
    console.log('myNumber is Positive');
} else {
    console.log('myNumber Negative or zero');
}



let myNumber2 = 0;
if(myNumber2 > 0){
    console.log('my Number is positive');
} else if (myNumber2 < 0) {
    console.log('myNumber is Negative');
} else {
    console.log('myNuber is zero');
}


let dayOfWeek = 'Friday';
switch (dayOfWeek) {
    case 'Monday' : console.log('Its Monday!');
    break;
    case 'Tuesday': console.log('Its Tuesday');
    break;
    case 'Wednesday' : console.log('Its Wednesday')
    break;
    default: console.log('Its some other day')
}

/*
let MyName = prompt("What is your Name?");
console.log("My name is "+ MyName);
*/


/*
let number = prompt("Enter a Number: ");
if (number % 2 === 0) {
    console.log("the Number is Even.")
}
else {
    console.log("The number is odd.")
}
*/

let grade = prompt ("Enter your grade (0-100)")
let letterGrade
switch (true) {
    case (grade >=90 && grade <=100): letterGrade = "A";
    break;
    case(grade >=80 && grade <=89): letterGrade="B";
    break;
    case(grade >= 70 && grade <=79): letterGrade="C";
    break;
    case(grade >=60 && grade <=69): letterGrade="D";
    break;
    default: letterGrade= "F";
} console.log(`Your letter grade is ${letterGrade}.`)