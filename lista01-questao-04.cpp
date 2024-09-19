#include <stdio.h>

int main(){
	
/*
	** Função : A área e o perímetro de um retângulo.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 18/09/2024
	** Observações: 	
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
