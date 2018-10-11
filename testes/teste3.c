#include <stdio.h>
int main(){
	//declaração de duas variáveis
	int num1,num2;
	//leitura de duas variáveis
	scanf("%d %d", &num1, &num2);
	for(int i = 0; i < num2; i++){
		num1++;
		//enquanto i é menor que num2, o valor de num1 é incrementado
	}
	printf("%d\n",num1%num2);
	//o módulo de num1 por num2 é impresso na tela
	return 0;
}