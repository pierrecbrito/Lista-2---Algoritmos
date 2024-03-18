#include<iostream>
using namespace std;
/*
. Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos
pagam R$ 100 mais um adicional conforme a seguinte tabela:
	• Crianças com menos de 10 anos pagam R$80;
	• Conveniados com idade entre 10 e 30 anos pagam R$50;
	• Conveniados com idade entre 31 e 60 anos pagam R$ 95;
	• Conveniados com mais de 60 anos pagam R$130. 
	
by @pierrecbrito
*/
int main() {
	int idade;
	float mensalidade = 100;
	cout << "Digite sua idade:\n";
	cin >> idade;
	
	if(idade < 10) {
		mensalidade += 80;
	} else if(idade >= 10 && idade <= 30) {
		mensalidade += 50;
	} else if(idade >= 31 && idade <= 60) {
		mensalidade += 95;
	} else if(idade > 60) {
		mensalidade += 130;
	}
	
	cout << "Valor do plano: R$" << mensalidade;
	
	return 0;
}
