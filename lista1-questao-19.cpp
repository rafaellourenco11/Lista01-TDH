#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Metros C�bicos para Litros.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
*/
	float metros_cubicos, litros;
	
	//ENTRADA 
	
	printf("Infomer o valor em Metros Cubicos: ");
	scanf(" %f",&metros_cubicos);
	
	//PROCESSAMENTO 
	
	litros = metros_cubicos * 1000;
	
	//SAIDA 
	
	printf("%.2f Metros Cubicos equivalem a: %.2f Litros.", metros_cubicos, litros);
	
	
	return 0; 
}
