#include<iostream>
using namespace std;
/*
Leia um n�mero qualquer e verifique se ele � par ou �mpar. Se o n�mero for par, escreva se � m�ltiplo
de 10; se for �mpar, escreva se � divis�vel por 5. 

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
