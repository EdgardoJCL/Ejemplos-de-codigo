//Se usara un array en javascript
function secondLargestNumber(numbers) { //nombre de la función, numbers = parametro
  let first = numbers[0] //variable es la posición cero del arrays de números
  let second = 0; //variable que almacena el segundo valor, se inicializa en cero
  //logica de la busqueda de números
  //for puede revisar el array, hacer la busqueda de lo que se le pide
  for (let i=0; i < numbers.length; i++) { //length indica tamaño del array
    //logica de otro codigo, casos de evaluación
    if(numbers[i] > first) {
      second = first;
      first = numbers[i]
      } 
    if(numbers[i] > second && numbers[i] < first) {
       second = numbers[i];
      }
    }
    return second
  }
  let nums = [8, 4, 6, 19, 9, 23] //se coloca otro nombre a la variable porque esta fuera de la función
  console.log(secondLargestNumber(nums))
