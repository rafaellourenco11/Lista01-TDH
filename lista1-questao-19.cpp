#include <stdio.h>

int main(){
	
/*
	** Função : Conversão de Metros Cúbicos para Litros.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 19/09/2024
	** Observações: 	
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
