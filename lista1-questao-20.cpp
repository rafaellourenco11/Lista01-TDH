#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Metros Quadrado para Acres.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
*/
	
	float metros_quadrados, acres;
	
	//ENTRADA 
	
	printf("Informe o valor em Metros Quadrados: ");
	scanf(" %f",&metros_quadrados);
	
	//PROCESSAMENTO 
	
	acres = metros_quadrados / 4047;
	
	//SAIDA
	
	printf("%.2f Metros quadrados equivalem a: %.5f Acres", metros_quadrados, acres);
	
	return 0;
}
