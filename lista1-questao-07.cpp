#include <stdio.h>

int main(){
	
/*
	** Fun��o : Resultado do quadrado e do cubo de um n�mero.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/	
	float numero, quadrado, cubo;
	
	//ENTRADA
	
	printf("Informe um numero: ");
	scanf(" %f",&numero);

	//PROCESSAMENTO
	
	quadrado = numero * numero;
	cubo = numero * numero * numero;
	
	//SAIDA
	
	printf("O Quadrado do e: %2.f \n",quadrado);
	printf("O Cubo do e: %2.f ",cubo);
	
	
	return 0; 
}
