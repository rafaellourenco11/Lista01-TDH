#include <stdio.h>

int main (){
	
/*
	** Fun��o : Calcular a velocidade final de um corpo usando a equa��o de Torricelli.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 21/09/2024
	** Observa��es: 	
*/

	float vi, a, delta, v;
	
	//ENTRADA 
	
	printf("Informe a Velocidade Inicial: ");
	scanf(" %f",&vi);
	printf("Informe a Aceleracao: ");
	scanf(" %f",&a);
	printf("Informe o Espa�o Percorrido: ");
	scanf(" %f",&delta);
	
	//PROCESSAMENTO 
	
	v = (vi * vi + 2 * a * delta);

	//SAIDA 
	
	printf("A velocidade final foi: %.2f",v);
	
	return 0;

}
