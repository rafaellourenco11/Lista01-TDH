#include <stdio.h>

int main(){
 /*
	** Fun��o : Convers�o de quil�metros pra metros por segundo.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 
	
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
