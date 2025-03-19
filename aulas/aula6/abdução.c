#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( ) {
  int i ,a ,b ;

srand(time(NULL));
  
int numeroDeVacasAbdusidas;

a=0;
b=100;


      numeroDeVacasAbdusidas = (rand() % (b - a )) + a ;
  printf ("numero de vacas; %d\n", numeroDeVacasAbdusidas);

  i=0;
  while (i <numeroDeVacasAbdusidas){
    printf("Vaca %d abduzida , Falta %d vacas.\n",i,numeroDeVacasAbdusidas -i);
  i++;
  
  }
  return 0;
}
