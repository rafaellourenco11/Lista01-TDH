#include <stdio.h>

int main(){
	
/*
	** Fun��o : A �rea e o per�metro de um ret�ngulo.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 18/09/2024
	** Observa��es: 	
*/
	float largura, altura;
	float area, perimetro;
	
	//ENTRADA
	
	printf("Informe a Largura do retangulo: ");
	scanf(" %f",&largura);
	printf("Informe a Altura do retangulo ");
	scanf(" %f",&altura);
	
	//PROCESSAMENTO 
	
	area = largura * altura;
	perimetro = 2 * (largura + altura);
	
	//SAIDA
	
	printf("A area do retangulo: %.2f \n",area);
	printf("O perimetro do retangulo: %.2f",perimetro);
	
	return 0;
	
}
