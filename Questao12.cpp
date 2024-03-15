#include<iostream>
using namespace std;
/*
Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar. As condições para aposentadoria são:
	• Ter pelo menos 65 anos;
	• Ou ter trabalhado pelo menos 30 anos;
	• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 

by @pierrecbrito
*/
int main() {
	int idade, tempoDeServico;
	cout << "Digite a idade e tempo de servico na sequencia:\n";
	cin >> idade >> tempoDeServico;
	
	if((idade >= 65 || tempoDeServico >= 30 ) || (idade >= 60 && tempoDeServico >= 25)) {
		cout << "Pode dar entrada a sua aposentadoria.";
	} else {
		cout << "Voce ainda nao pode se aposentar.";
	}
	
	return 0;
}
