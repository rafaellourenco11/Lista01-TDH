#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Milhas para Quil�metros.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/
	float milhas, quilometros;
	
	//ENTRADA 
	
	printf("Informe o valor em Milhas: ");
	scanf(" %f",&milhas);
	
	//PROCESSAMENTO
	
	quilometros = milhas * 1.60934;
	
	//SAIDA 
	
	printf("%.2f Milhas em Quilometros e: %.2f",milhas ,quilometros);
	
	return 0;
	
}
