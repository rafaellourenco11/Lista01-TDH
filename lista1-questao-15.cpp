#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Quil�metros para Milhas.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/
	float quilometros, milhas;
	
	//ENTRADA 
	
	printf("Informe o valor em Quilometros: ");
	scanf(" %f",&quilometros);
	
	//PROCESSAMENTO 
	
	milhas = quilometros * 0.621371;
	
	//SAIDA
	
	printf("%.2f Quilometros em Milhas e: %.2f", quilometros, milhas);
	
	return 0;
}
