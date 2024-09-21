#include <stdio.h>

int main (){
	
/*
	** Função : Calcular a velocidade final de um corpo usando a equação de Torricelli.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 21/09/2024
	** Observações: 	
*/

	float vi, a, delta, v;
	
	//ENTRADA 
	
	printf("Informe a Velocidade Inicial: ");
	scanf(" %f",&vi);
	printf("Informe a Aceleracao: ");
	scanf(" %f",&a);
	printf("Informe o Espaço Percorrido: ");
	scanf(" %f",&delta);
	
	//PROCESSAMENTO 
	
	v = (vi * vi + 2 * a * delta);

	//SAIDA 
	
	printf("A velocidade final foi: %.2f",v);
	
	return 0;

}
