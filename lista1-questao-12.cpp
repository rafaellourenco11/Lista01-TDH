#include <stdio.h>

int main(){
			
/*
	** Fun��o : Convers�o de Celsius para Kelven.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/
	
	float celsius, kelven;
	
	//ENTRADA 
	
	printf("Informe a temperatura em Celsius: ");
	scanf(" %f",&celsius);
	
	//PROCESSAMENTO
	
	kelven = celsius + 273.15;
	
	//SAIDA
	
	printf("%.2f em celsius para Kelven e: %.2f", celsius, kelven );
	
	
	return 0;
	
}
