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

