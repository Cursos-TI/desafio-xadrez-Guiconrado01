#include <stdio.h>
int main() {
  int i = 0;
  int x = 0;
  int z = 0;
  int j = 0;

  for( i = 0; i < 5; i++)
  {
    printf("Movimento Cavalo para Direita\n");
  }
    do{
      printf("Movimento Bispo para Cima,Esquerda\n");
      x++;
    }while( x < 5);

    while(z < 8)
    {
      printf("Movimento Rainha para esquerda\n", z);
      z++;
    }

    for(j = 0; j < 2; j++){
      printf("Movimento Cavalo para Cima\n");
    }
    printf("Movimento Cavalo para Esquerda\n");

        
      

    




  
  return 0;
}