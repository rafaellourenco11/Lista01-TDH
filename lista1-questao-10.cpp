#include <stdio.h>

int main(){
	
/*
	** Função : Conversão de Fahrenheit para Celsius.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
*/

	float fahrenheit, celsius;
	
	//ENTRADA 
	
	printf("Informe a temperatura em Fahrenheit: ");
	scanf(" %f",&fahrenheit);
	
	//PROCESSAMENTO 
	
	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	
	//SAIDA 
	
	printf("%.2f ° em Fahrenheit para Celsius e: %.2f °", fahrenheit, celsius);
	
	return 0;
}
