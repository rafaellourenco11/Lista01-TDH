#include <stdio.h>

int main(){
	
/*
	** Fun��o : Transformar um Valor inteiro em Horas, Minutos e Segundos.
	** Autor : Rafael de OLiveira Louren�o
	** Data : 19/09/2024
	** Observa��es: 	
*/
	
	int valor, horas, minutos, segundos;
	
	
	//ENTRADA
	
	printf("Informe um Valor: ");
	scanf(" %d",&valor);
	
	//PROCESSAMENTO 
	
	horas = valor / 3600;
	minutos = (valor % 3600) / 60;
	segundos = valor % 60;
	
	//SAIDA 
	
	printf("%.2d Transformado: %.2d Horas, %.2d Minutos, %.2d Segundos", valor, horas, minutos, segundos);
	
	return 0;
	
}
