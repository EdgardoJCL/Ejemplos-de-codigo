#include <stdio.h>
//Encontrar el numero mayor de los dados
int max_of_four(int num1, int num2, int num3, int num4) //función
{
  int array[4] = {num1, num2, num3, num4};
  int max = array[0];
  for (int i=0; i<4; i++){
  if(max < array[i]) //aqui si coloco menor que, me dara el numeor menor mas pequeño
     max = array[i];
  }
  return max;
}

int main(){
  int num1, num2, num3, num4;
  int resultado = max_of_four(10, 29, 83, 46);
  printf("%d", resultado);
  
  return 0;
}
