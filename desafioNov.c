#include <stdio.h>
int main() {
  int i = 0;
  int x = 0;
  int z = 0;

  for( i = 0; i < 5; i++)
  {
    printf("Movimento Cavalo para Direita\n");
  }
    do{
      printf("Movimento Bispo para Cima,Esquerda");
      printf("\n", x);
      x++;
    }while( x < 5);

    while(z < 8)
    {
      printf("Movimento Rainha para esquerda\n", z);
      z++;
    }




  
  return 0;
}