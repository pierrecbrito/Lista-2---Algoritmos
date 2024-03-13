#include<iostream>
using namespace std;
/*
Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e
escreva-os na ordem solicitada. 

by @pierrecbrito
*/
int main() {
	int n1, n2, n3;
	char ordem;
	cout << "Digite os 3 numeros inteiros e a ordem (d ou c):\n";
	cin >> n1 >> n2 >> n3 >> ordem;
	
	if(ordem == 'd') {
		if(n1 > n2 && n1 > n3 && n2 > n3) { //Possibilidade n1, n2, n3
			cout << n1 << " - " << n2 << " - " << n3;
		} else if(n2 > n1 && n2 > n3 && n1 > n3) { //Possibilidade n2, n1, n3
			cout <<  n2  << " - " << n1 << " - " << n3;
		} else if(n3 > n1 && n3 > n2 && n1 > n2) { //Possibilidade n3, n1, n2
			cout << n3 << " - " << n1 << " - " << n2;
		} else if(n2 > n1 && n2 > n3 && n3 > n1) {//Possibilidade n2, n3, n1
			cout << n2 << " - " << n3 << " - " << n1;
		} else if(n3 > n2 && n3 > n1 && n2 > n1) {//Possibilidade n3, n2, n1
			cout << n3 << " - " << n2 << " - " << n1;
		} else if(n1 == n2 && n1 > n3) {//Possibilidade de n1 ser igual a n2 e serem maiores que n3
			cout << n1 << " - " << n2 << " - " << n3;
		} else if(n1 == n2 && n1 < n3) {//Possibilidade de n1 ser igual a n2 e serem menores que n3
			cout << n3 << " - " << n1 << " - " << n2;
		} else if(n2 == n3 && n2 > n1) {//Possibilidade de n2 ser igual a n3 e serem maiores que n1
			cout << n2 << " - " << n3 << " - " << n1;
		} else if(n2 == n3 && n2 < n1) {//Possibilidade de n2 ser igual a n3 e serem menores que n1
			cout << n1 << " - " << n2 << " - " << n3;
		} else if(n1 == n3 && n1 > n2) {//Possibilidade de n1 ser igual a n3 e serem maiores que n2
			cout << n1 << " - " << n3 << " - " << n2;
		} else if(n1 == n3 && n1 < n2) {//Possibilidade de n1 ser igual a n3 e serem menores que n2
			cout << n2 << " - " << n1 << " - " << n3;
		} else if(n1 == n3 && n1 == n2) {//Possibilidade de todos serem iguais
			cout << n1 << " - " << n2 << " - " << n3;
		} 
	} else if(ordem == 'c') {
		if(n1 < n2 && n1 < n3 && n2 < n3) { //Possibilidade n1, n2, n3
			cout << n1 << " - " << n2 << " - " << n3;
		} else if(n2 < n1 && n2 < n3 && n1 < n3) { //Possibilidade n2, n1, n3
			cout <<  n2  << " - " << n1 << " - " << n3;
		} else if(n3 < n1 && n3 < n2 && n1 < n2) { //Possibilidade n3, n1, n2
			cout << n3 << " - " << n1 << " - " << n2;
		} else if(n2 < n1 && n2 < n3 && n3 < n1) {//Possibilidade n2, n3, n1
			cout << n2 << " - " << n3 << " - " << n1;
		} else if(n3 < n2 && n3 < n1 && n2 < n1) {//Possibilidade n3, n2, n1
			cout << n3 << " - " << n2 << " - " << n1;
		} else if(n1 == n2 && n1 < n3) {//Possibilidade de n1 ser igual a n2 e serem maiores que n3
			cout << n1 << " - " << n2 << " - " << n3;
		} else if(n1 == n2 && n1 > n3) {//Possibilidade de n1 ser igual a n2 e serem menores que n3
			cout << n3 << " - " << n1 << " - " << n2;
		} else if(n2 == n3 && n2 < n1) {//Possibilidade de n2 ser igual a n3 e serem maiores que n1
			cout << n2 << " - " << n3 << " - " << n1;
		} else if(n2 == n3 && n2 > n1) {//Possibilidade de n2 ser igual a n3 e serem menores que n1
			cout << n1 << " - " << n2 << " - " << n3;
		} else if(n1 == n3 && n1 < n2) {//Possibilidade de n1 ser igual a n3 e serem maiores que n2
			cout << n1 << " - " << n3 << " - " << n2;
		} else if(n1 == n3 && n1 > n2) {//Possibilidade de n1 ser igual a n3 e serem menores que n2
			cout << n2 << " - " << n1 << " - " << n3;
		} else if(n1 == n3 && n1 == n2) {//Possibilidade de todos serem iguais
			cout << n1 << " - " << n2 << " - " << n3;
		} 
	}
	
	return 0;
}
