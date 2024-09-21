#include <stdio.h>

int main (){
	
	
/*
	** Função : Intervelo de tempo entre dois horários.
	** Autor : Rafael de OLiveira Lourenço
	** Data : 19/09/2024
	** Observações: 	
*/
	
	int hora1, hora2, minuto1, minuto2;
	int diferenca_hora, diferenca_minuto;
	int total_m1, total_m2, diferenca;
	
	//ENTRADA 
	
	printf("Informe o Primeiro horario em Horas: ");
	scanf(" %d",&hora1);
	printf("Informe o Primeiro horario em Minutos: ");
	scanf(" %d",&minuto1);
	
	printf("Informe o Segundo horario em Horas: ");
	scanf(" %d",&hora2);
	printf("Informe o Segundo horario em Minutoes: ");
	scanf(" %d",&minuto2);	
	
	//PROCESSAMENTO
	
	total_m1 = hora1 * 60 + minuto1;
	total_m2 = hora2 * 60 + minuto2;
	
	diferenca = (total_m2 - total_m1 + 1440) % 1440;
	
	diferenca_hora = diferenca / 60;
	diferenca_minuto = diferenca % 60;
	
	//SAIDA 
	
	printf("O intervalo de diferenca entre os horarios: %.2d:%.2d", diferenca_hora, diferenca_minuto);
	
	return 0;
}
