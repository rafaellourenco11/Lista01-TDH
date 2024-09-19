#include <stdio.h>

int main(){
	
/*
	** Função : Conversão de Milhas para Quilômetros.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
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
