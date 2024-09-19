#include <stdio.h>
#include <math.h>

int main(){
	
/*
	** Fun��o : Calcular a coordenada X e Y.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
*/
	float x, y, distancia;
	
	//ENTRADA 
	
	printf("Informe o valor do eixo X: ");
	scanf(" %f",&x);
	printf("Informe o valor do eixo Y: ");
	scanf(" %f",&y);
	
	//PROCESSAMENTO 
	
	distancia = sqrt((x * x) + (y * y));
	
	//SAIDA
	
	printf("A Distancia do eixo %.2f , %.2f a origem (0, 0) foi: %.2f",x , y, distancia);
	
	return 0;
	
}


