#include <iostream>
using namespace std;
/*
Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
	• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
	• Equiláteros: tem os comprimentos dos três lados iguais;
	• Isósceles: tem os comprimentos de dois lados iguais; • Escaleno: tem os comprimentos dos três
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
