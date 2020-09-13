/*
Radares
Ultimamente, as coisas andam muito difíceis no trânsito. Há radares de velocidade para todos os lados!
Mas o pessoal do trânsito percebeu o seguinte: a galera anda correndo o tempo todo, e quando encontra um radar, pronto!
Diminui a velocidade (às vezes ao extremo) para não levar uma multa.
Diante disso, agora o esquema de multas é diferente: quando o motorista passa em um radar, não se mede mais a velocidade
que o carro passa no radar, mas sim o horário atual que o carro está passando no radar, o horário que o motorista passou
no radar anterior e a distância entre os radares. Desta forma, calcula-se a velocidade média do motorista: se a velocidade
média for maior que a permitida, multa nele!
Os radares possuem uma inédita tecnologia chinesa, e o horário que o motorista passa é dado pelo radar em segundos. Por
exemplo, se o motorista passar no radar às 17:20:32, então o radar dá o horário em segundos como 62432.
Como disse, o pessoal do trânsito teve essa ideia, mas eles entendem só de trânsito mesmo. . . Então, você foi convocado
para desenvolver uma solução para esse nobre problema. Em troca, você fica sem multas de velocidade por um ano, e
ainda ganha dois pontos e meio na prova de APC!
Agora que você está entendendo melhor de programação, você quer modularizar sua solução. A ideia é a seguinte:
1. Você deve primeiro escrever uma função
double calculaVelocidadeMedia(int tA, int tB, double distancia)
que receba três parâmetros
• dois horários tA e tB, em segundos, que definem quando o motorista passou num radar A e, depois, num radar B, e
• a distância entre o radar A e o radar B, em quilômetros.
Sua função deve retornar a velocidade média em km/h que o motorista fez do radar A ao radar B.
Ah, lembre-se que para converter de segundos para horas, basta dividir os segundos por 3600.
Exemplo 1
calculaVelocidadeMedia(61200,63000,60.0)
deve retornar
120.0
Exemplo 2
calculaVelocidadeMedia(54169,57346,170.0)
deve retornar aproximadamente
192.634561
_
2. Depois, você deve escrever uma função
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
que receba quatro parâmetros
• dois horários tA e tB, em segundos, que definem quando o motorista passou num radar A e, depois, num radar B,
• a distância entre o radar A e o radar B, em quilômetros e
• a velocidade máxima da pista.
Sua função deve usar a função calculaVelocidadeMedia e retornar 1 se o motorista deve ser multado, e 0 caso contrário.
1
Exemplo 1
levouMulta(61200,63000,60.0,120.0)
deve retornar
0
Exemplo 2
levouMulta(54169,57346,170.0,120.0)
deve retornar
1
*/


//#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
	return distancia/((tB-tA)/3600.0);
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
	double velocidade = calculaVelocidadeMedia(tA, tB, distancia);

	if(velocidade<=velocidadeMaxima){
		return 0;
	}

	else{
		return 1;
	}
}
/*
int main(){
	int hora_A, hora_B;
	double dist, num, velocidade;

	scanf("%d %d %lf", &hora_A, &hora_B, &dist);

	printf("%f\n", calculaVelocidadeMedia(hora_A, hora_B, dist));

	scanf("%d %d %lf %lf", &hora_A, &hora_B, &dist, &velocidade);

	printf("%d\n", levouMulta(hora_A, hora_B, dist, velocidade));

	return 0;
}*/
