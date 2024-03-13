#include<iostream>
using namespace std;
/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de
aumento. Mostre o salário antigo, o novo salário e a diferença.
	CÓDIGO 	CARGO 		PERCENTUAL
	101 	Gerente 	10%
	102 	Engenheiro 	20%
	103 	Técnico 	30% 
	
by @pierrecbrito
*/
int main() {
	cout << fixed;
    cout.precision(2);
    
	float salario, novoSalario, diferenca;
	int codigoCargo;
	
	cout << "Digite seu salario e seu codigo de cargo:\n";
	cin >> salario >> codigoCargo;
	
	if(codigoCargo == 101) {
		novoSalario = salario + (0.10 * salario);
	} else if(codigoCargo == 102) {
		novoSalario = salario + (0.20 * salario);
	} else if(codigoCargo == 103) {
		novoSalario = salario + (0.30 * salario);
	} else {
		novoSalario = salario + (0.40 * salario);
	}
	
	diferenca = novoSalario - salario;
	
	cout << "Salario atual: R$" << salario << "\nNovo salario: R$" << novoSalario << "\nDiferenca (aumento): R$" << diferenca;
	
	return 0;
}
