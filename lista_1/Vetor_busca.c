/*
Vetor 5
Faça um programa que leia um vetor e um número após o vetor e diga se este número está contido no vetor.
Entrada
A entrada é composta por um único caso de teste. Na primeira linha do caso de teste há um número inteiro N (
5 ≤ N ≤ 10000 ), na segunda linha do caso de teste há N números Vi ( −1000000 ≤ Vi ≤ 1000000 ), cada número Vi
representa um elemento do vetor e na terceira linha há um número inteiro X ( −1000000 ≤ X ≤ 1000000 ).
Saída
A saída é composta por exatamente uma linha contendo a palavra “pertence” caso o número X pertença ao vetor e “nao
pertence” caso o número X não pertença ao vetor.
Exemplo
Entrada
5
10 5 8 -100 13
15
Saída
nao pertence
Entrada
5
10 5 8 -100 13
-100
Saída
pertence
*/
#include <stdio.h>

int main(){
	int N,X;
		scanf("%d", &N);

		int num[N];

		for(int i=0; i<N; i++){
			scanf("%d", &num[i]);
		}

		scanf("%d", &X);

		for(int i=0; i<N; i++){
			if(num[i]==X){
				printf("pertence\n");
				return 0;
			}
		}
		printf("nao pertence\n");
return 0;
}
