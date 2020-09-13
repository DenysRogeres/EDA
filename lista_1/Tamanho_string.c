/*
String 1
Escreva um programa que leia uma string e imprima o tamanho string lida.
Entrada
A entrada é composta com um único caso de teste contendo uma única string, sem espaços, de tamanho T (1 ≤ T ≤ 1000).
Saída
A saída deverá conter uma única linha contendo um número inteiro indicando o tamanho da string lida.
Exemplo
Entrada
Fundamentos
Saída
11
*/
#include <stdio.h>
int main(){
	char string[1000];
	scanf("%s", string);

	for(int i=0; i<1000; i++){
		if(string[i]=='\0'){
			printf("%d\n", i);
			return 0;
		}
		
	}
	return 0;
}
