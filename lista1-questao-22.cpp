#include <stdio.h>

int main(){
	
/*
	** Fun��o : ler a altura e o raio de um cilindro circular.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
*/

	float raio, altura, total;
	
	//ENTRADA
	
	printf("Informe a Altura do Cilindro Circular: ");
	scanf(" %f",&raio);
	printf("Informe o Raio do Cinlindro Circular: ");
	scanf(" %f",&altura);
	
	//PROCESSAMENTO 
	
	total = 3.14159 * (raio * raio) * altura;
	
	//SAIDA
	
	printf("O volume total do Cinlindro Circular e: %.2f",total);
	
	return 0;

}
