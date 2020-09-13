/*
Viagem com bons restaurantes
Beto e Alice farão uma viagem para conhecer o interior do país. Alice é uma moça muito metódica, e muito exigente, e
por isso Beto já está planejando os locais em que deverão fazer suas refeições.
Para cada dia de viagem, Beto listou a nota de todos os restaurantes da região em que estarão. Para fazer essa lista, Beto,
acessou um famoso site de restaurantes, o ViagemAconselha. No site ele colocou o nome da cidade em que estaria cada
dia e o site retorna os restaurantes com suas notas, por exemplo:
100 5 200 3 50 1 400 1 201 2
Ah sim, a nota é até 5 estrelas e o restaurante é representado por um código numérico (por algum motivo aleatório
qualquer ;) ).
O problema é que a lista está muito grande. São muitos dias de viagens e muitos restaurante em cada dia. Assim Beto
não consegue identificar rapidamente os restaurantes que eles devem ir para Alice1 ficar feliz.
Para conseguir a tempo da viagem, Beto e Alice pediram sua ajuda para escrever um programa de computador que diga
em qual restaurante que eles irão comer em cada dia de viagem.
Entrada
A entrada é comporta por diversas linhas, cada linha representa um dia de viagem. Cada linha começa com um número
inteiro R (1 ≤ R ≤ 200) indicando quantos restaurantes existem na cidade naquele dia de viagem, depois são apresentados
2 ∗ R números Ri que são divididos em pares, Ripar
, com i sendo o i-ézimo elemento da sequência com i par, indicando
o código do restaurante e Riímpar
, sendo i-ézimo elemento da sequência com i ímpar, indicando a nota do restaurante.
Sabemos que 0 ≤ Ripar ≤ 107
e 0 ≤ Riímpar ≤ 5, também dois restaurantes diferentes nunca possuem o mesmo código
identificador para o mesmo dia de viagem.
A entrada termina em EOF
Saída
Para cada dia de viagem, o seu programa, deve imprimir três linhas. A primeira linha deve conter a frase Dia n, com n
sendo o dia da viagem começando por 1, na segunda linha o código do restaurante com a maior nota, quando houver
empate imprima o menor código e por fim a terceira linha deve ser deixada em branco.
Exemplos
Exemplo de entrada
5 100 5 200 3 50 1 400 1 201 2
6 50 2 400 4 10 5 20 5 5 5 90 3
2 20 3 21 3
Saída para o exemplo de entrada
Dia 1
100
Dia 2
5
Dia 3
20
*/


#include <stdio.h>

int main(){
	int codRest, notaRest, N, melhorNota, melhorCod, dia=1;

	while(scanf("%d", &N)!=EOF){
		//Colocando o melhor codigo e a melhor nota como inicial
		scanf("%d %d", &codRest, &notaRest);
		melhorNota = notaRest;
		melhorCod = codRest;

		for(int i=0; i<N-1; i++){
			scanf("%d %d", &codRest, &notaRest);


			if(notaRest >= melhorNota){
				if(notaRest == melhorNota && codRest > melhorCod){
					melhorCod = melhorCod;
				}
				else{
				melhorCod = codRest;
				melhorNota = notaRest;
				}
			}
			else {}
			}
		
		printf("Dia %d\n",dia);
		printf("%d\n\n",melhorCod);

		dia++;



	}

	return 0;
}

