#include<iostream>
using namespace std;
/*
Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago.

by @pierrecbrito
*/
int main() {
	cout << fixed;
    cout.precision(2);
	int ano;
	float precoCarro, imposto;
	
	cout << "Digite o ano do carro:\n";
	cin >> ano;
	cout << "Digite o preco do carro:\n";
	cin >> precoCarro;
	
	if(ano < 1990) {
		imposto = 0.01 * precoCarro;
	} else {
		imposto = 0.015 * precoCarro;
	}
	
	cout << "Imposto a ser pago: R$ " << imposto; 
	return 0;
}
