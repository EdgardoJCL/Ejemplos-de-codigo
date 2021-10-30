//se usan clases en java  
class Main{
  //define el acceso, ..., funcion tipo void, nombre de la función
  public static void showSubstring(string text, int start/*punto donde inicia el substring*/, int end) //funcion, saca el substring de un string recibido
  { 
    System.out.println(text.substring(start, end));
  }
  public static void main(string[] args){
    string text = "Lasfloresazules";
    showSubtring(text, 2, 9); //posiciones de las letras de lafloresazules
  }
}
