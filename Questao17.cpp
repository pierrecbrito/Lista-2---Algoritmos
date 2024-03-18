#include<iostream>
using namespace std;
/*
Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo
de 10; se for ímpar, escreva se é divisível por 5. 

by @pierrecbrito
*/
int main() {
	int numero;
	cout << "Digite um numero qualquer: \n";
	cin >> numero;
	
	if(numero % 2 == 0) {
		if(numero % 10 == 0 && numero != 0) {
			cout << "Eh multiplo de 10.";
		} else {
			cout << "Nao eh multiplo de 10.";
		}
	} else {
		if(numero % 5 == 0 && numero != 0) {
			cout << "Eh divisivel de 5.";
		} else {
			cout << "Nao eh divisivel de 5.";
		}
	}
	
	return  0;
}
