#include<iostream>
using namespace std;
/*
Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o c�digo do cargo de um funcion�rio e
calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever� receber 40% de
aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.
	C�DIGO 	CARGO 		PERCENTUAL
	101 	Gerente 	10%
	102 	Engenheiro 	20%
	103 	T�cnico 	30% 
	
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
