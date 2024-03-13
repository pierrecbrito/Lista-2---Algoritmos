#include<iostream>
using namespace std;
/*
O cardápio de uma lanchonete é o seguinte:
				Sanduíche
	Código 		Descrição 		Preço Unitário
	100 		Cachorro quente 	1,10
	101 		Baurú simples 		1,30
	102 		Baurú com ovo 		1,50
	103 		Hamburger 			1,10
	104 		Cheesburger 		1,30
	
				Bebida
	Código 		Descrição 		Preço Unitário
	105 		Refrigerante 	1,00
	106 		Suco 			2,00
	107 		Nescau 			1,50
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade
de cada um e calcule o valor a ser pago por aquele lanche. 
*/
int main() {
	cout << fixed;
    cout.precision(2);
    int codigoSanduiche, quantidadeSanduiche, codigoBebida, quantidadeBebida;
    float valorPedido, valorSanduiche, valorBebida;
    
    cout << "Digite o codigo do sanduiche :\n";
    cin >> codigoSanduiche;
    
    cout << "Digite a quantidade de sanduiches:\n";
    cin >> quantidadeSanduiche;
    
    cout << "Digite o codigo da bebida:\n";
    cin >> codigoBebida;
    
    cout << "Digite a quantidade de bebidas:\n";
    cin >> quantidadeBebida;
    
    if(codigoSanduiche == 100) {
    	valorSanduiche = quantidadeSanduiche * 1.10;
	} else if(codigoSanduiche == 101) {
    	valorSanduiche = quantidadeSanduiche * 1.30;
	} else if(codigoSanduiche == 102) {
    	valorSanduiche = quantidadeSanduiche * 1.50;
	} else if(codigoSanduiche == 103) {
    	valorSanduiche = quantidadeSanduiche * 1.10;
	} else if(codigoSanduiche == 104) {
    	valorSanduiche = quantidadeSanduiche * 1.30;
	}
	
	if(codigoBebida == 105) {
    	valorBebida = quantidadeBebida;
	} else if(codigoBebida == 106) {
    	valorBebida = quantidadeBebida * 2;
	} else if(codigoBebida == 107) {
    	valorBebida = quantidadeBebida * 1.50;
	} 
    
    valorPedido = valorSanduiche + valorBebida;
    
    cout << "Valor total do pedido: R$" << valorPedido;
    return 0;
}
