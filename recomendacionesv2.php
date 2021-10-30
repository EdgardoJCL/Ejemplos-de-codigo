<?php
function placesRecommendation($condition = '', $question = ''){ //parametros, valor del parametro(argumento)
  $clima = array("Bogota" => "frio", "Monteria" => "caliente", "Medellin" => "templado");//clave => valor
  $ubicacion = array("Guajira" => "norte", "Leticia" => "sur", "Santander" => "este", "Antioquia" => "oeste"); 
  $turismo = array("Santa Marta" => "mar", "Villacencio" => "llanos", "Riohacha" => "desierto", "Quindio" => "valle");
  
  switch ($condition) { 
    case "clima":
      $search = $clima; //variable buscar = variable = clima
    break;
    case "ubicacion":
      $search = $ubicacion;
    break;
    case "turismo":
      $search = $turismo;
    break;
    default:
      echo "Bienvenido a Colombia!";      
  }
  echo "El mejor lugar para ir es ".array_search($question, $search); //se esta mostrando el array que busco
}
placesRecommendation("ubicacion", "sur");
