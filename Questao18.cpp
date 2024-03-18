#include<iostream>
using namespace std;
/*
Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar,
verifique e escreva se o parcelamento foi com juros ou se foi sem juros. 

by @pierrecbrito
*/

int main() {
	float total, parcela, quantidadeDeParcelas;
	cout << "Digite o total da compra, a parcela e a quantidade de parcelas:\n";
	cin >> total >> parcela >> quantidadeDeParcelas;
	
	if(parcela * quantidadeDeParcelas == total) {
		cout << "Parcelamento sem juros.";
	} else {
		cout << "Parcelamento com juros.";
	}
	
	return 0;
}
