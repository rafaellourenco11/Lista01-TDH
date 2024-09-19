#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Fahrenheit para Celsius.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/

	float fahrenheit, celsius;
	
	//ENTRADA 
	
	printf("Informe a temperatura em Fahrenheit: ");
	scanf(" %f",&fahrenheit);
	
	//PROCESSAMENTO 
	
	celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	
	//SAIDA 
	
	printf("%.2f � em Fahrenheit para Celsius e: %.2f �", fahrenheit, celsius);
	
	return 0;
}
