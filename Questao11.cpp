#include<iostream>
using namespace std;
/*
Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique
e escreva a soma de todos os seus algarismos. Por exemplo, para o número 251 a soma será 8 (2 + 5 +
1). Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número
inválido”. 

by @pierrecbrito
*/

int main() {
	int numero, soma, unidades, dezenas, centenas, milhares, dezenasDeMilhar;
	cout << "Digite um numero inteiro maior que zero de ateh 5 algarismos:\n";
	cin >> numero;
	
	if(numero > 0 && numero < 99999) {
		if(numero <= 9) {//1 algarismo
			unidades = numero * 1;
			soma = unidades;
		} else if(numero <= 99) {//2 algarismos
			unidades = numero % 10;
			dezenas = (numero - unidades)/10;
			soma = unidades + dezenas;
		} else if(numero <= 999) {//3 algarismos
			unidades = numero % 10;
			dezenas = ((numero - unidades) % 100) / 10;
			centenas = (numero - unidades - dezenas * 10) / 100;
			soma = unidades + dezenas + centenas; 
		} else if(numero <= 9999) {//4 algarismos
			unidades = numero % 10;
			dezenas = ((numero - unidades) % 100) / 10;
			centenas =  ((numero - unidades - dezenas * 10) % 1000) / 100;
			milhares = (numero - unidades - dezenas * 10 - centenas * 100) / 1000;
			soma = unidades + dezenas + centenas + milhares; 
		} else if(numero <= 99999) {//5 algarismos
			unidades = numero % 10;
			dezenas = ((numero - unidades) % 100) / 10;
			centenas =  ((numero - unidades - dezenas * 10) % 1000) / 100;
			milhares = (numero - unidades - dezenas * 10 - centenas * 100) % 10000 / 1000;
			dezenasDeMilhar = (numero - unidades - dezenas * 10 - centenas * 100 - milhares * 1000) / 10000;
			soma = unidades + dezenas + centenas + milhares + dezenasDeMilhar; 
		}
	} else {
		cout << "Numero invalido.";
		return 0;
	}
	
	cout << "Soma: " << soma;
	
	return 0;
}
