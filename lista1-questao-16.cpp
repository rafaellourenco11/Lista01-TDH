#include <stdio.h>

int main(){
	
/*
	** Função : Conversão de Graus para Radianos .
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
*/

	float graus, radianos;
	
	//ENTRADA 
	
	printf("Informe o angulo em Graus: ");
	scanf(" %f",&graus);
	
	//PROCESSAMENTO 
	
	radianos = graus * (3,14159  / 180.0);	
	
	//SAIDA
	
	printf("%.2f Graus em Radianos e: %.2f ", graus, radianos);
	
	return 0;
}
