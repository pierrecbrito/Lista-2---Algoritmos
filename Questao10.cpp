#include<iostream>
using namespace std;
/*
A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média
das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado. 

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
