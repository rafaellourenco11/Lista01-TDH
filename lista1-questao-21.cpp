#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Acres para Metros Quadrados.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
*/

	float acres, metros_quadrados;
	
	//ENTRADA 
	
	printf("Informe o valor em Acres: ");
	scanf(" %f",&acres);
	
	//PROCESSAMENTO
	
	metros_quadrados = acres * 4047;
	
	//SAIDA
	
	printf("%.2f Acres equevalem a: %.2f Metros Quadrados", acres, metros_quadrados);
	
	return 0;
}
