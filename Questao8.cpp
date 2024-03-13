#include<iostream>
using namespace std;
/*
Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada. 

by @pierrecbrito
*/

int main() {
	char letra;
	int numero, soma;
	cout << "Digite o numero inteiro e a letra:\n";
	cin >> numero >> letra;
	
	if(letra == 'a') {
		soma = (numero - 1) + (numero - 2) + (numero - 3) + (numero - 4) + (numero - 5) + (numero - 6) + (numero - 7) + (numero - 8) + (numero - 9) + (numero - 10);
	} else if(letra == 's') {
		soma = (numero + 1) + (numero + 2) + (numero + 3) + (numero + 4) + (numero + 5) + (numero + 6) + (numero + 7) + (numero + 8) + (numero + 9) + (numero + 10);
	} else {
		cout << "Letra invalida.";
		return 0;
	}
	
	cout << "Resultado pedido: " << soma;
	
	return 0;
}
