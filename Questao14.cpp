#include<iostream>
using namespace std;
/*
Leia 3 n�meros inteiros e escreva uma das seguintes mensagens:
	� Todos os n�meros s�o iguais;
	� Todos os n�meros s�o diferentes;
	� Apenas dois n�meros s�o iguais.
	
by @pierrecbrito
*/
int main() {
	int num1, num2, num3;
	cout << "Digite 3 numeros:\n";
	cin >> num1 >> num2 >> num3;
	
	if(num1 == num2 && num2 == num3) {
		cout << "Todos os numeros sao iguais.";
	} else if(num1 != num2 && num2 != num3) {
		cout << "Todos os numeros sao diferentes.";
	} else {
		cout << "2 numeros sao iguais.";
	}
	return 0;
}
