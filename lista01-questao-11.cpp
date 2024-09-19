#include <stdio.h>

int main(){
	
/*
	** Função : Conversão de Kelven para Celsius.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
*/
	
	float kelven, celsius;
	
	//ENTRADA 
	
	printf("Informe o Valor em Kelven: ");
	scanf(" %f",&kelven);
	
	//PROCESSAMENTO 
	
	celsius = kelven - 273.15;
	
	//SAIDA
	
	printf("%.2f Kelven para Celsius e: %.2f", kelven, celsius);
	
	
	return 0;
	
}
