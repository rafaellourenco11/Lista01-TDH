#include <stdio.h>

int main (){	
	
/*
	** Fun��o : Calcular a densidade de uma subst�ncia.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
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
