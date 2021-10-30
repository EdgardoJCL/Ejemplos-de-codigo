//forma mas sencilla
function secondLargestNumber(numbers) {
    numbers.sort(); //función de javascript, vemos el numero mas grande
    //pero con el reverse podremos ver el menor numero mas grande
    numbers.reverse();
    return numbers[1] //al colocar esto, estamos hablando de la posición uno 
    //que seria el segundo valor dentro de un array
}

let nums = [8, 4, 6, 0, 12, 5]; //esta función se rompe si hay números repetidos
console.log(secondLargestNumber(nums))
