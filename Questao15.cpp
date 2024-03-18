#include<iostream>
#include <cmath>
using namespace std;

/*
Calcule as ra�zes de uma equa��o de 2� grau. Observe que:
	� x = -b � v?/2a, onde ? = B2 - 4ac;
	� ax2 + bx + c = 0 representa uma equa��o de 2� grau;
	� A vari�vel a tem que ser diferente de zero. Caso seja igual, escreva a mensagem �N�o � equa��o de
	segundo grau�;
	� Se ? < 0, n�o existe real. Escreva a mensagem �N�o existe raiz�;
	� Se ? = 0, existe uma raiz real. Escreva a raiz e a mensagem �Raiz �nica�;
	� Se ? = 0, escreva as duas ra�zes reais. 

by @pierrecbrito
*/

int main() {
	int a, b, c;
	float delta, x1, x2;
	cout << "Entre com os valores de a, b e c:\n";
	cin >> a >> b >> c;
	
	if(a != 0) {
		cout << "Equacao: " << a << "x2";
		
		if(b < 0) 
			cout << " " << b << "x"; 
		else
			cout << " + " << b << "x"; 
			
		if(c < 0) 
			cout << " " << c; 
		else
			cout << " + " << c; 
			
		cout << " = 0\n";
		
		delta = pow(b, 2) - 4*a*c;
		
		if(delta < 0) {
			cout << "Nao existe raiz.";
			return 0;
		} else if(delta == 0) {
			cout << "Raiz unica. ";
			x1 = (b*-1 + sqrt(delta))/(2*a);
			cout << "Raiz: " << x1;
		} else if(delta >= 0) {
			cout << "2 raizes reais.\n";
			x1 = (b*-1 + sqrt(delta))/(2*a);
			cout << "Raiz 1: " << x1;
			x2 = (b*-1 - sqrt(delta))/(2*a);
			cout << "\nRaiz 2: " << x2;
		}
		
	} else {
		cout << "Nao eh equacao de segundo grau.";
	}

	 return 0;
}
