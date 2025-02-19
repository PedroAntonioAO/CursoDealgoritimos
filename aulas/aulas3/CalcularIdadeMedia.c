#include <stdio.h>

int main(){
 int rafael ,pedro,mariafernanda ,ruanny;

  printf("Idade de Rafael: ");
  scanf("%d",&rafael);

  printf("Idade de Pedro: ");
  scanf("%d",&pedro);

  printf("Idade de Mariafernanda: ");
  scanf("%d",&mariafernanda);

  printf("Idade de Ruanny: ");
  scanf("%d",&ruanny);

  float idademedia;
  
  idademedia = (rafael + pedro + mariafernanda + ruanny) / 4.0;

  printf("A idade media da turma e: %.2f\n" ,idademedia);
  
    
    return 0;
}
