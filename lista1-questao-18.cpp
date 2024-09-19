#include <stdio.h>

int main(){
	
/*
	** Função : Conversão de Polegadas para Centimetros.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
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
	
