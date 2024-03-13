#include<iostream>
using namespace std;
/*
Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo. 

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
