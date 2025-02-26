#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(){
  //variavel que captura o valor do dado
  int numeroDado;
  //variavel que captura o valor do numero de jogadas
  int saida = 1;

  srand(time(NULL));

  printf("o jogo começou\n");

  while (saida){
   printf("jogando o dado...\n");
    numeroDado = rand() % 12 + 1;
    printf(" O numero sorteado foi: %d\n",numeroDado);

      printf("Deseja continuar o jogo ? \n0 - Não\n1 - Sim\nEscolha: ");
      scanf("%d",&saida); 
  }

  printf("O jogo acabou\n");

  return 0;
}