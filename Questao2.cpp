#include<iostream>
using namespace std;
/*
Leia um n�mero, verifique e escreva se este n�mero � par ou �mpar. Se for par, verifique e escreva se �
maior que 100 ou n�o e se for �mpar verifique e escreva se � positivo ou negativo. 

by @pierrecbrito
*/
int main() {
	int numero;
	cout << "Digite um numero:\n";
	cin >> numero;
	
	if(numero % 2 == 0) {
		cout << "Seu numero eh par";
		if(numero > 100) {
			cout << " e ainda eh maior que 100.";
		} else {
			cout << ", mas nao eh maior que 100.";
		}
	} else {
		cout << "Seu numero eh impar";
		if(numero > 0) {
			cout << " e ainda eh positivo.";
		} else {
			cout << " e ainda eh negativo.";
		}
	}
	
	return 0;
}
