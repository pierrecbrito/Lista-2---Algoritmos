#include<iostream>
using namespace std;
/*
Crie um programa que exibe se um dia � dia �til, fim de semana ou dia inv�lido dado o n�mero referente
ao dia. Considere que domingo � o dia 1 e s�bado � o dia 7. 

by @pierrecbrito
*/
int main() {
	int dia;
	cout << "Entre com o numero do dia:\n";
	cin >> dia;
	
	switch(dia) {
		case 1: 
			cout << "Fim de semana.";
			break;
		case 2:
			cout << "Dia util.";
			break;
		case 3:
			cout << "Dia util.";
			break;
		case 4:
			cout << "Dia util.";
			break;
		case 5:
			cout << "Dia util.";
			break;
		case 6:
			cout << "Dia util.";
			break;
		case 7:
			cout << "Fim de semana.";	
			break;
		default: 
			cout << "Dia invalido.";					
	}
	
	return 0;
}
