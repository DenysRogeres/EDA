/*
Aeroporto
A crescente utilização do transporte aéreo preocupa os especialistas, que prevêem que o congestionamento em aeroportos
poderá se tornar um grande problema no futuro. Os números atuais já são alarmantes: relatórios oficiais demonstram que
na Europa, em junho de 2001, houve uma média de 7.000 atrasos de vôos por dia. Preocupada com a previsão dos seus
especialistas em tráfego aéreo, a Associação de Transporte Aéreo Internacional (ATAI) está começando um estudo para
descobrir quais são os aeroportos onde o tráfego aéreo pode vir a ser mais problemático no futuro.
Como programador recém contratado pela ATAI você foi encarregado de escrever um programa para determinar, a partir
de uma listagem de aeroportos e vôos, qual aeroporto possui maior probabilidade de congestionamento no futuro. Como
medida da probabilidade de congestionamento será utilizado neste estudo o número total de vôos que chegam ou que
partem de cada aeroporto.
Entrada
A entrada é composta de vários conjuntos de teste. A primeira linha de um conjunto de teste contém dois números inteiros
A e V (0 ≤ A ≤ 100 e 0 ≤ V ≤ 10000), que indicam respectivamente o número de aeroportos e o número de vôos. Os
aeroportos são identificados por inteiros de 1 a A. As V linhas seguintes contêm cada uma a informação de um vôo,
representada por um par de números inteiros positivos X e Y , indicando que há um vôo do aeroporto X para o aeroporto
Y . O final da entrada é indicado quando A = V = 0.
Saída
Para cada conjunto de teste da entrada seu programa deve produzir três linhas. A primeira linha identifica o conjunto de
teste, no formato “Teste n”, onde n é numerado a partir de 1. A segunda linha deve conter o identificador do aeroporto que
possui maior tráfego aéreo. Caso mais de um aeroporto possua este valor máximo, você deve listar todos estes aeroportos,
em ordem crescente de identificação, e separados por pelo menos um espaço em branco. A terceira linha deve ser deixada
em branco. A grafia mostrada no Exemplo de Saída, abaixo, deve ser seguida rigorosamente.
Exemplo
Entrada
5 7
1 3
2 1
3 2
3 4
4 5
3 5
2 5
3 5
1 3
1 2
3 2
1 2
2 1
0 0
Saída
Teste 1
3
Teste 2
1 2
*/
#include <stdio.h>

int main(){
	int A,V,X,Y, num[10000], maiorTraf, loop=1;

	scanf("%d %d", &A, &V);

	while(A!=0 && V!=0){

		for(int i=1; i <=A; i++){
			num[i]=0;
		}

		maiorTraf = 0;
		for(int i = 1; i <= V; i++){
			scanf("%d %d", &X, &Y);
			num[X]++;
			num[Y]++;

			if(num[X] > maiorTraf){
				maiorTraf=num[X];
			}
			if(num[Y] > maiorTraf){
				maiorTraf=num[Y];
			}
		}
		printf("Teste %d\n",loop);

		for(int i=1; i<=A; i++){
			if(num[i]==maiorTraf){
				printf("%d ", i);
			}
		}
	
		printf("\n");
		printf("\n");
		scanf("%d %d", &A, &V);
		loop++;

			/*scanf("%d", &X);
			scanf("%d", &Y);
			num[i] = X;
			num[i+1] = Y;
			printf("%d\n",num[i]);
			printf("%d\n",num[i+1]);*/	
	}


	return 0;
}

