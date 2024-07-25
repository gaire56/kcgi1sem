/*
for (let i =0; i<10; i++){
    console.log(i);
}
*/
/*
let sum = 0;
for (let j =5; j>=2; j--){
    sum=sum+j;
    }
    console.log(`the toal sum is ${sum}`);
*/
/*
let sum = 0;
for (let k = 2; k<=32; k*=2) {
    sum=sum+k;
}
console.log(`the total sum is ${sum}`);
*/

/*
const numbers = [7, 3, 16, 27, 54];
let sum = 0;
for (let i = 0; i < numbers.length; i++){
    sum += numbers[i];
}
console.log(`the sum is ${sum}`);
*/

/*
const numbers = [2, 4, 8, 16, 32];
let max = numbers[0];
for (let i=1; i<numbers.length; i++){
    if(max<numbers[i]){
        max=numbers[i]
    }
}
console.log(`the max number is ${max}`);
*/

/*While Loop*/
/*
let sum =0;
let i =0;
while (i<10){
    sum=sum+1;
    console.log(i); // print a number of chars in the string
    i++;
}
*/

/*JavaScript program that uses a while loop to find and display the first 5 even numbers;*/
/*
let count =1; // Initialize a variable to keep track of numbers 
let evenNumbers = []; //Initilize an array to store even numbers
while (evenNumbers.length < 5){
    if(count % 2 === 0){
        evenNumbers.push(count); // If number is even, add it to array
    }
    count++; //Increment count for the next number 
}
console.log("the first 5 even numbers are: " + evenNumbers.join(", "));
*/
/*
let userInput;
do {
    userInput = parseFloat(prompt("Enter a positive number:"))
} while(isNaN(userInput) || userInput <=0);
console.log("You entared a valid positive: " + userInput);
*/

/*display the factorial of any number enter by user:*/
let userInput;
let factorial =1;
do{
    userInput = parseInt(prompt("Enter a positive integer to calculate its factorial:"));
    } while (isNaN(userInput) || userInput < 0);

    if(userInput === 0){
        factorial = 1;
    } else {
        for(let i=1; i <= userInput; i++){
            factorial *=i; //factorial = factorial *i;

        }
    }
    console.log(`The factorial of ${userInput} is: ${factorial}`);