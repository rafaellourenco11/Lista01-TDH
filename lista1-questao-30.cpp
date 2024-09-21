#include <stdio.h>

int main (){	
	
/*
	** Função : Calcular a densidade de uma substância.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 19/09/2024
	** Observações: 	
*/
	
	float densidade, massa, volume;
	
	//ENTRADA 
	
	printf("Informe o Valor da Massa: ");
	scanf(" %f",&massa);
	printf("Informe o Valor do Volume: ");
	scanf(" %f",&volume);
	
	//PROCESSAMENTO 
	
	densidade = massa / volume;
	
	//SAIDA 
	
	printf("A densidade foi: %.2f",densidade);
}
