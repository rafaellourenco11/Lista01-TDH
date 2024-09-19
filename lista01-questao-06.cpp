#include <stdio.h>

int main(){
	
/*
	** Função : Soma de Três valores inteiros.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
*/
	int n1, n2, n3, soma;
	
	//ENTRADA 
	printf("Informe o Primeiro numero: ");
	scanf(" %d",&n1);
	printf("Informe o Segundo numero: ");
	scanf(" %d",&n2);
	printf("Informe o Terceiro numero: ");
	scanf(" %d",&n3);
	
	//PROCESSAMENTO
	
	soma = n1 + n2 + n3;
	
	//SAIDA
	
	printf("a soma entre: %d + %d + %d = %d ",n1, n2, n3, soma);
	
	
	return 0;
}
