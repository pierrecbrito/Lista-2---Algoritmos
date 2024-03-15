#include<iostream>
using namespace std;
/*
Leia 3 números inteiros e escreva uma das seguintes mensagens:
	• Todos os números são iguais;
	• Todos os números são diferentes;
	• Apenas dois números são iguais.
	
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
