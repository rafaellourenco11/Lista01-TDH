#include <stdio.h>

int main(){
	
/*
	** Fun��o : Convers�o de Polegadas para Centimetros.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/

	float polegadas, centimetros;
	
	//ENTRADA 
	
	printf("Informe o valor em Polegadas: ");
	scanf(" %f", &polegadas);
	
	//PROCESSAMENTO 
	
	centimetros = polegadas * 2.54;
	
	//SAIDA
	
	printf("%.2f Polegadas equivalem a %.2f Centimetros", polegadas, centimetros);
	
	
	return 0;
	

}
	
