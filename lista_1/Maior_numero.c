/*
Maior número
Faça um programa que leia uma quantidade arbitrária de números inteiros e retorne o maior entre eles. Se houver números repetidos que forem os maiores, imprima qualquer um deles.

Entrada
A entrada é composta por várias linhas, cada uma contendo um inteiro de 4 bytes. A entrada termina com EOF.

Saída
A saída é composta de uma única linha contendo o maior número.

Exemplo 1
Entrada
1
2
3
4
Saída
4
Exemplo 2
Entrada
2
7
1
7
10
12
-5
12
Saída
12
*/
#include <stdio.h>


int main(){
	int menor, maior;
		scanf("%d", &maior);
		menor=maior;
		while(scanf("%d", &menor)!=EOF){
			if(menor>=maior){
				maior=menor;
			}
			else{}
	}
		printf("%d\n", maior);
	return 0;
}