#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de celsius para Fahrenheit.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/

	float celsius, fahrenheit;
	
	//ENTRADA
	
	printf(" Informe a Temperatura em Celsius: ");
	scanf(" %f",&celsius);
	
	//PROCESSAMENTO
	
	fahrenheit = (celsius * 9.0 / 5.0 ) + 32.0;
	
	//SAIDA 
	
	printf("%.2f Celsius em Fahrenheit e: %.2f ", celsius, fahrenheit);
	
	
}
