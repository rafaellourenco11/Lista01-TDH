#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Radianos para Graus.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/
	float radianos, graus;
	
	//ENTRADA 
	
	printf("Informe o Angulo em Radianos: ");
	scanf(" %f",radianos);
	
	//PROCESSAMENTO 
	
	graus = radianos * (3,14159 * 180.0);
	
	//SAIDA
	
	printf("%.2f Radianos em Graus e: %2.f",radianos ,graus);
	
	return 0;
	
}
