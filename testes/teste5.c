#include <stdio.h>

/*
*função que incrementa um valor e imprime o seu módulo com um outro valor de controle
*/

int main(){

	//declaração de dois ints
	int num1,num2;
	//leitura de dois ints
	scanf("%d %d", &num1, &num2);

	for(int i = 0; i < num2; i++){
		num1++;
		/*enquanto i for menor que num2, o valor de num1 é incrementado*/
	}

	//módulo de num1 por num2 é impresso na tela
	printf("%d\n",num1%num2);
	
	return 0;
}