#include <stdio.h>

int main(){
	
/*
	** Fun��o : Conversao de Metros por Segundo para Quil�metros por Hora.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/
	float metros_segundos, quilometro;
	
	//ENTRADA 
	
	printf("Infomer o valor em Metros por Segundo: ");
	scanf(" %f",&metros_segundos);
	
	//PROCESSAMENTO 
	
	quilometro = metros_segundos * 3.6;
	
	//SAIDA 
	
	printf("%.2f m/s em Quil�metros por Hora e: %.2f", metros_segundos, quilometro);
	
	return 0;
	
}
