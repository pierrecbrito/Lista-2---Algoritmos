#include<iostream>
using namespace std;
/*
Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela
abaixo:
	CONSUMO (Km/l) 		MENSAGEM
	Menor que 8 		Venda o carro!
	Entre 8 e 12 		Econômico!
	Maior que 12 		Super econômico! 

by @pierrecbrito
*/
int main() {
	float distancia, litrosConsumidos, kmPorLitro;
	
	cout << "Digite a distancia e os litros consumidos nessa ordem:\n";
	cin >> distancia >> litrosConsumidos;
	
	kmPorLitro = distancia / litrosConsumidos;
	
	if(kmPorLitro < 8) {
		cout << "Venda o carro!";
	} else if(kmPorLitro >= 8 && kmPorLitro <= 12) {
		cout << "Economico!";
	} else {
			cout << "Super economico!";
	}
	
	
	return 0;
}
