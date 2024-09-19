#include <stdio.h>

int main(){
	
/*
	** Função : Conversão de Radianos para Graus.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
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
