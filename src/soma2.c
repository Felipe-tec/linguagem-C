#include <stdio.h> 

int main(){
int n1;
int n2;
int rs;
printf("Digite um número: \n");
// alocar o número digitado pelo usuário no
// endereço de memória da variavél n1
scanf("%d",&n1);
printf("Digite outro número:\n");
scanf("%d",&n2);
// realizar a soma entre n1 e n2
rs = n1+n2;
// exibir o resultado da soma
printf("O resultado é %d\n",rs);
return 0;
}