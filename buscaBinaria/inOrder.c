#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	int dado;
	struct no *esq, *dir;
} no;

typedef struct pilha {
	struct no *folha;
	struct pilha *prox;
} pilha;
		

void empilha (pilha **nova, no *raiz){
	pilha *novo = malloc (sizeof (pilha));

	novo->folha = raiz;
	novo->prox = (*nova);
  (*nova)=novo;
}

no *desempilha (pilha **nova) {
	no *dado;
	pilha *lixo;

	lixo = (*nova);
	dado = lixo->folha;
	(*nova) = lixo->prox;

	free(lixo);
	return dado;
}

void em_ordem (no *raiz){
pilha *aux = malloc(sizeof (pilha));
aux = NULL;

	while(1){
		
		while(raiz != NULL){
			
			empilha(&aux, raiz);

			raiz = raiz->esq;
			printf("%d ", raiz->dado);
		}

		if(aux != NULL){
			raiz = desempilha(&aux);
			raiz = raiz->dir;
		}

		else{
			break;
		}
	}
}
