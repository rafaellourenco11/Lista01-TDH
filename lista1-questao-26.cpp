#include <stdio.h>

int main (){
	
/*
	** Função : Calcular o horário de término de uma experiência biológica.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 21/09/2024
	** Observações: 	
*/

	int hora_inicial, minuto_inicial, segundo_inicial, duracao_biologica;
	int segundo_inicio, segundo_final;
	int hora_total, minuto_total, segundo_total;
	
	//ENTRADA 
	
	printf("Informe a Hora inicial - Horas|minutos|segundos: ");
	scanf("%d %d %d", &hora_inicial, &minuto_inicial, &segundo_inicial);
	
	printf("Informe a duracao da Experiencia Biologica em Segundos: ");
	scanf(" %d",&duracao_biologica);
	
	//PROCESSAMENTO
	
	segundo_inicio = hora_inicial * 3600 + minuto_inicial * 60 + segundo_inicial;
	
	segundo_final = segundo_inicio + duracao_biologica;
	
	hora_total = (segundo_final / 3600) % 24;
	
	minuto_total = (segundo_final % 3600) / 60;
	
	segundo_total = segundo_final % 60;
	
	//SAIDA 
	
	printf("Duracao final da Experiencia Biologica foi a:  %.2d:%.2d:%.2d\n", hora_total, minuto_total, segundo_total);
	
	return 0;
}
