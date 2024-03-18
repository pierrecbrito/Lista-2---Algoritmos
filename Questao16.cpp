#include<iostream>
using namespace std;
/*
Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a
carteira. 

by @pierrecbrito

*/
int main() {
	int idade, anosFaltantes;
	cout << "Digite a idade: \n";
	cin >> idade;
	
	if(idade >= 18) {
		cout << "Pode tirar a carteira.";
	} else {
		anosFaltantes = 18 - idade;
		
		if(anosFaltantes > 1) {
			cout << "Ainda nao pode tirar a carteira. Faltam "  << anosFaltantes << " anos.";
		} else  {
			cout << "Ainda nao pode tirar a carteira. Falta " << anosFaltantes << " ano.";
		}
		
	}
	
	return 0;
}
