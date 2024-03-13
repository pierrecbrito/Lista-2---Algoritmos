#include<iostream>
using namespace std;
/*
A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule
e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
	Professor nível 1 	R$ 12,00 por hora aula
	Professor nível 2 	R$ 17,00 por hora aula
	Professor nível 3 	R$ 25,00 por hora aula
by @pierrecbrito
*/
int main() {
	cout << fixed;
    cout.precision(2);
	int nivel;
	float horas, salario;
	cout << "Digite o nivel (1 ao 3) do professor e o total de horas trabalhadas:\n";
	cin >> nivel >> horas;
	
	if(nivel == 1) {
		salario = horas * 12;
	} else if(nivel == 2) {
		salario = horas * 17;
	} else if(nivel == 3) {
		salario = horas * 25;
	}
	
	cout << "Salario: R$" << salario;
	
	return 0;
}
