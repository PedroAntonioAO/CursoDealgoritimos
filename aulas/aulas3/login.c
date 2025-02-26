#include  <stdio.h>

int main(){

  int senha;
  char CPF[12];

  printf("Digite seu CPF: ");
  fgets(CPF,12,stdin);

  printf("Digite sua senha: ");
  scanf("%d",&senha);

  printf("Seu Cpf e: %d\n",CPF);
  printf("Sua senha e: %d\n",senha);

  return 0;
}