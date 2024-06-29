/*
//Program 1
const myArray = [1, 7, 11]
console.log(myArray);
console.log(myArray[0]);
console.log(myArray[1]);
console.log(myArray[2]);
*/

/*
//Program 2
const cities = [];
cities.push("Tokyo")
cities.push("Nagoya")
cities.push("Sapporo")
cities.pop()
cities.push("Fukuoka")
cities.reverse()
console.log(cities);
*/

/*
//Program 3
const numbers = [4, 9, 3, 4, 7]
numbers.sort();
console.log(numbers);
console.log(numbers.length);
*/

const countries = [
    ["Japan", "Tokyo"],
    ["South Korea", "seoul"],
    ["Indonesia", "Jakarta"],
];

//Print specific element (Tokyo) using array indexting
console.log(countries[0][1]); //Tokyo (specific element's index)

//Print the third element (South Kores) using array indexting
console.log(countries [1][0]); //South Korea (specific element's index)

//Print the third element (Indonesia and Jakarta) of the outer array
console.log(countries[2]); //[Indonesia, Jakarta]

//Print length of outer array (number of countries)
console.log(countries.length); //3

//Print length of inner array at index 1 (number of elements within array["South Korea", "Seoul"])
console.log(countries[1].length); //2