#include <iostream>
using namespace std;
/*
Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
tri�ngulo e, se forem, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles
n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:
	� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
	� Equil�teros: tem os comprimentos dos tr�s lados iguais;
	� Is�sceles: tem os comprimentos de dois lados iguais; � Escaleno: tem os comprimentos dos tr�s
	lados diferentes. 

by @pierrecbrito
*/
int main() {
	float x, y, z;
	bool saoComprimentos;
	cout << "Digite o valor de x, y e z na sequencia: \n";
	cin >> x >> y >> z;
	
	//Cada lado deve ser menor que a soma dos outros dois.
	saoComprimentos = (x + y > z) && (x + z > y) && (y + z > x);
	
	if(saoComprimentos) {
		if(x == y && x == z) {
			cout << "As medidas sao de um triangulo equilatero.";
		} else if (x == y || x == z || y == z) {
			cout << "As medidas sao de um triangulo isosceles.";
		} else {
			cout << "As medidas sao de um triangulo escaleno.";
		}
	} else {
		cout << "Os valores de x, y e z nao formam um triangulo.";
	}
	
	
	return 0;
}
