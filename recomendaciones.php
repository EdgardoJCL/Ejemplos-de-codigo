<?php
function placesRecommendation($condition = '', $question = ''){ //parametros, valor del parametro(argumento)
  $clima = array("Bogota" => "frio", "Monteria" => "caliente", "Medellin" => "templado");//clave => valor
  $ubicacion = array("Guajira" => "norte", "Leticia" => "sur", "Santander" => "este", "Antioquia" => "oeste"); 
  $turismo = array("Santa Marta" => "mar", "Villacencio" => "llanos", "Riohacha" => "desierto", "Quindio" => "valle");
  
  switch ($condition) { //condición sera el punto de busqueda para la mejor opción segun lo que quiera
    case "clima":
      echo array_search($question, "clima"); //el array_search(busqueda/pregunta, array donde se realice esto), esta es la forma inmovil, no puede ser alreves
    break;
    case "ubicacion":
      echo array_search($question, "ubicacion");
    break;
    case "turismo":
      echo array_search($question, "turismo");
    break;
    default:
      echo "Bienvenido a Colombia!";      
  }
}
placesRecommendation("clima", "frio"); //llamado de la función(argumentos de busqueda(clave, valor))
