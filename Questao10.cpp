#include<iostream>
using namespace std;
/*
A nota final de um estudante e calculada a partir de tr�s notas atribu�das entre o intervalo de 0 at� 10,
respectivamente, a um trabalho de laborat�rio, a uma avalia��o semestral e a um exame final. A m�dia
das tr�s notas mencionadas anteriormente obedece aos pesos: Trabalho de Laborat�rio: 2; Avalia��o
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno est� reprovado (media
entre 0 e 2,9), de recupera��o (entre 3 e 4,9) ou se foi aprovado. 

by @pierrecbrito
*/

int main() {
	float nota1, nota2, nota3, media;
	
	cout << "Digite a nota do trabalho de laboratorio:\n";
	cin >> nota1;
	cout << "Digite a nota da avaliacao Semestral:\n";
	cin >> nota2;
	cout << "Digite a nota do exame final:\n";
	cin >> nota3;
	
	media = ((nota1*2) + (nota2*3) + (nota3*5))/10;
	
	if(media <= 2.9) {
		cout << "Reprovado com media " << media;
	} else if(media >=3 && media <= 4.9) {
		cout << "Recuperacao com media " << media;
	} else if(media > 4.9) {
		cout << "Aprovado com media " << media;
	}
	
	return 0;
}
