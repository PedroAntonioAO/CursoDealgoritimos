#include <stdio.h>
int main(){
  (menuIteracao);
  return 0;
}

int menuIteracao (){

 char opcao;

  do{
    printf("Selecione a opção  desejada: \n\t\ts :Saldo na conta;\n\t\tc: Verificar Conta;\n\t\tl: Sair.\n\t\tOpção: ");
    scanf("%c",&opcao);

    if (opcao == 's'){
       printf("\nVerificando o saaldo\n\n");
    }else if(opcao == 'c'){
      printf("\nVerificando a conta\n\n" );
    }else if(opcao == 'l'){
      printf("\nSaindo\n\n");
      break;
      printf("\nSua entrada não é uma opção\n\n");
      
  
    }
  } while(1);
return 0;
}
