/*
Problema: A idade da dona Mˆonica
Dona Mˆonica ´e m˜ae de trˆes filhos que tˆem idades diferentes. Ela notou que, neste ano, a soma das
idades dos seus trˆes filhos ´e igual `a idade dela. Neste problema, dada a idade de dona Mˆonica e as
idades de dois dos filhos, seu programa deve computar e imprimir a idade do filho mais velho.
Por exemplo, se sabemos que dona Mˆonica tem 52 anos e as idades conhecidas de dois dos filhos s˜ao
14 e 18 anos, ent˜ao a idade do outro filho, que n˜ao era conhecida, tem que ser 20 anos, pois a soma
das trˆes idades tem que ser 52. Portanto, a idade do filho mais velho ´e 20. Em mais umexemplo,
se dona Mˆonica tem 47 anos e as idades de dois dos filhos s˜ao 21 e 9 anos, ent˜ao o outro filho tem
que ter 17 anos e portanto, a idade do filho mais velho ´e 21.
Entrada
A primeira linha da entrada cont´em um inteiro M representando a idade de dona Mˆonica. A segunda
linha da entrada cont´em um inteiro A representando a idade de um dos filhos. A terceira linha da
entrada cont´em um inteiro B representando a idade de outro filho.
Considere as seguintes restri¸c˜oes para os valores de entrada:
• 40 ≤ M ≤ 110
• 1 ≤ A < M
• 1 ≤ B < M
• A 6= B
Sa´ıda
Seu programa deve imprimir uma linha contendo um n´umero inteiro, representando a idade do filho
mais velho de dona Mˆonica.
Observe os casos de exemplos para melhor entendimento da sa´ıda.
Exemplos
Exemplo de entrada
52
14
18
Sa´ıda para o exemplo de entrada
20
Exemplo de entrada
47
21
9
Saída para o exemplo de entrada
21
*/
#include <stdio.h>

int main(){
	int M,A,B,C;

	scanf("%d %d %d", &M, &A, &B);

	C = M - (A + B);

	if(A>=B && A>=C){
		printf("%d\n", A);
	}
	else if(B>=A && B>=C){
		printf("%d\n", B);	
	}
	else if(C>=A && C>=B){
		printf("%d\n", C);
	}
	return 0;
}