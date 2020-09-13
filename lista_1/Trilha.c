/*
Trilhas
Nos finais de semana, Paulo faz longas caminhadas pelas bonitas trilhas que atravessam as matas vizinhas à sua cidade.
Recentemente Paulo adquiriu um aparelho de GPS e com ele mapeou as mais belas trilhas da região. Paulo programou o
GPS para armazenar, a intervalos regulares, a altitude do ponto corrente durante o trajeto. Assim, após percorrer as
trilhas com o seu GPS, Paulo tem informações que permitem por exemplo produzir gráficos como os abaixo:
Paulo tem uma nova namorada, e quer convencê-la a passear junto com ele pelas trilhas. Para o primeiro passeio juntos,
Paulo quer escolher uma trilha “fácil”. Segundo o seu critério, a trilha mais fácil é a que, em um dos sentidos do percurso,
exige o menor esforço de subida. O esforço exigido em um trecho de subida é proporcional ao desnível do trecho.
Tarefa
Dadas as informações colhidas por Paulo sobre distâncias e altitudes de um conjunto de trilhas, você deve escrever um
programa que determine qual é a trilha que exige o menor esforço de subida.
Entrada
A primeira linha da entrada contém um número inteiro N que indica o número de trilhas. Cada uma das N linhas
seguintes contém a descrição de uma trilha (1 ≤ N ≤ 100). As trilhas são identificadas por números de 1 a N. A ordem
em que as trilhas aparecem na entrada determina os seus identificadores (a primeira trilha é a de número 1, a segunda a de
número 2, a última a de número N). A descrição de uma trilha inicia com um número inteiro M que indica a quantidade
de pontos de medição da trilha (2 ≤ M ≤ 1000), seguido de M números inteiros Hi representando a altura dos pontos da
trilha (medidos a intervalos regulares e iguais para todas as linhas). Paulo pode percorrer a trilha em qualquer sentido (ou
seja, partindo do ponto de altitude H1 em direção ao ponto de altitude HM, ou partindo do ponto de altitude HM em
direção ao ponto de altitude H1).
Saída
Seu programa deve produzir uma única linha na saída, contendo um número inteiro representando o identificador da
melhor trilha, conforme determinado pelo seu programa. Em caso de empate entre duas ou mais trilhas, imprima a de
menor identificador.
Exemplo de Entrada 1
5
4 498 500 498 498
10 60 60 70 70 70 70 80 90 90 100
5 200 190 180 170 160
2 1000 900
4 20 20 20 20
Exemplo de Saída 1
2
1
Exemplo de Entrada 2
3
5 600 601 600 601 600
4 500 499 500 499
4 300 300 302 300
Exemplo de Saída 2
2
*/

#include <stdio.h>

int main(){
	int N, id_Trilha, valorSobe=0, valorDesce=0, valorMin=0 , topo[1000], cont=10000, id_Linha[1000],y,i,valorAbsoluto;

	scanf("%d", &N);

	int maiorLinha[N];

	for(i = 0; i < N; i++){
		scanf("%d", &id_Trilha);
		//Pegar elementos da linha
		for(y = 0; y < id_Trilha; y++){
			scanf("%d", &topo[y]);
		}
		y=0;

		//Ver quantos passos da subida
		for(int z = 0; z < id_Trilha-1; z++){
			if(topo[z] < topo[z+1]){
				valorSobe = valorSobe + (topo[z+1] - topo[z]);
			}
			else{}
		}
		//printf("SÃO %d PASSOS DA SUBIDA\n", valorSobe);

		//Ver quantos passos da descida
		for(int z = id_Trilha-1; z > 0; z--){
			if(topo[z] < topo[z-1]){
				valorDesce = valorDesce + (topo[z-1]-topo[z]);
			}
			else{}
		}
	  //  printf("SÃO %d PASSOS DA DESCIDA\n",valorDesce);

		//Verificar Id_Trilha
		if(valorDesce >  valorSobe){
			valorMin = valorSobe;

		}
		else{
			valorMin =  valorDesce;
		}
	//	printf("O MENOR VALOR É %d\n", valorMin);
		id_Linha[i]=valorMin;
		//colocando menor valor
		/*if(valorMin < cont){
			cont = valorMin;
			id_Linha[i] = i;
		}
	
		else{}*/

		valorDesce=0;
		valorSobe=0;
		//printf("ESSA LINHA É %d\n",i+1);
		//printf("\n");
	//	printf("VALOR DA LINHA %d É %d\n",i+1, id_Linha[i]);
		maiorLinha[i]=id_Linha[i];

			//valorAbsoluto = id_Linha[0];
/*
	for(int x = 0; x < N; x++){
		if(id_Linha[x] > id_Linha[x+1]){
			valorAbsoluto = id_Linha[x+1];
			printf("ENTREI\n");
		}

		else{}
	}*/
	}

	/*printf("VALOR DA LINHA 1 É %d\n", maiorLinha[0]);
	printf("VALOR DA LINHA 2 É %d\n", maiorLinha[1]);
	printf("VALOR DA LINHA 3 É %d\n", maiorLinha[2]);
	printf("VALOR DA LINHA 4 É %d\n", maiorLinha[3]);
	printf("VALOR DA LINHA 5 É %d\n", maiorLinha[4]);

	for(int x=0; x < N; x++){
		printf("o valor da linha %d é %d\n",x+1,maiorLinha[x]);
	}
*/	valorAbsoluto=0;
	for(int x=0; x < N-1; x++){
		if(maiorLinha[valorAbsoluto] > maiorLinha[x+1]){
			valorAbsoluto = x+1;
		}
		else{}
	}

	printf("%d\n", valorAbsoluto+1);



	return 0;
}
