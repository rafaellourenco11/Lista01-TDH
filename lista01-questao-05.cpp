#include <stdio.h>

int main(){
	
/*
	** Convers�o de Reais para D�lares.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/
	float reais, cotacao, conversao;
	
	//EMTRADA
	
	printf(" Informe o valor em Reais: ");
	scanf(" %f",&reais);
	printf(" Informe o valor da cotacao do Dolar: ");
	scanf(" %f",&cotacao);
	
	//PROCESSAMENTO 
	
	conversao = reais / cotacao;
	
	//SAIDA
	
	printf("%.2f Reais vale: %.2f Dolares",reais, conversao);
	
	
	return 0;
	
}
