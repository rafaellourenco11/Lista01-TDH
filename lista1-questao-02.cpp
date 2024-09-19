#include <stdio.h>

int main(){
 /*
	** Função : Conversão de quilômetros pra metros por segundo.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 
	
*/
	
	float velocidade, conversao;
	
	//ENTRADA 
	
	printf("Informe a velocidade em KM/h: " );
	scanf(" %f",&velocidade);
	
	//PROCESSAMENTO
	conversao = velocidade/3.6;
	
	//SAIDA 
	
	printf("%.2f km/h convertido para Metros por Segundo e: %.2f m/s.",velocidade, conversao);
	
	
}
