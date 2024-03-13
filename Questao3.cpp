#include<iostream>
using namespace std;

/*
Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
	• Masculino = (72,7 x altura) - 58
	• Feminino = (62,1 x altura) - 44,7
	
by @pierrecbrito 
*/

int main() {
	cout << fixed;
    cout.precision(2);
    
	float altura, pesoIdeal;
	char genero;
	
	cout << "Digite a altura: \n";
	cin >> altura;
	cout << "Digite seu genero: \n";
	cin >> genero;
	
	if(genero == 'm') {
		pesoIdeal = (72.7 * altura) - 58;
	} else if (genero == 'f') {
		pesoIdeal = (62.1 * altura) - 44.7;
	}
	
	cout << "Seu peso ideal: " << pesoIdeal << "Kg.";
	
	return 0;
}
