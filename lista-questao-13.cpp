#include <stdio.h>

int main(){
	
/*
	** Função : Conversao de Metros por Segundo para Quilômetros por Hora.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
*/
	float metros_segundos, quilometro;
	
	//ENTRADA 
	
	printf("Infomer o valor em Metros por Segundo: ");
	scanf(" %f",&metros_segundos);
	
	//PROCESSAMENTO 
	
	quilometro = metros_segundos * 3.6;
	
	//SAIDA 
	
	printf("%.2f m/s em Quilômetros por Hora e: %.2f", metros_segundos, quilometro);
	
	return 0;
	
}
