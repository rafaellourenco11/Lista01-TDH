#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Graus para Radianos .
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
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
