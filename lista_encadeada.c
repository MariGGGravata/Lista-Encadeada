#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

struct No{
	
	int info;
	TNo *prox;
	
};

TNo* criar(int v){
	
	TNo* ptno = (TNo*)malloc(sizeof(TNo));
	ptno->info = v;
	ptno->prox = NULL;
	return ptno;
	
}

int tamanho(TNo *e){
	
	if(e == NULL){
		
		return -1;
		
	}
	
	TNo *ptaux = e->prox;
	int a = 0;
	
	while(ptaux != NULL){
		
		a = a + 1;
		ptaux = ptaux->prox;
		
	}
	return a;
}

void inserir(TNo *e, int v){

	if(e == NULL){
		
		return;
		
	}	
	
	TNo *ptaux = e;
	while(ptaux->prox != NULL){
		
		ptaux = ptaux->prox;
		
	}
	
	ptaux->prox = criar(v);
	
}

void inserirpos(TNo *e, int v, int p){
	
	if(e == NULL){
		
		return;
		
	}	
	
	TNo *ptaux = e;
	TNo *ptnovo = criar(v);
	
	int pos = 1;
	while(pos != p){
		
		pos = pos + 1;
		ptaux = ptaux->prox;
		
	}
	
	ptnovo->prox = ptaux->prox;
	ptaux->prox = ptnovo;
}

void remover(TNo *e, int v){
	
	if(e == NULL){
		
		return;
		
	}
	
	TNo *ptaux = e;
	while(ptaux->prox != NULL){
		
		if(ptaux->prox->info == v){
			
			ptaux->prox = ptaux->prox->prox;	
			return;
			
		} else{
			
			ptaux = ptaux->prox;
		}
	}
}

void removerpos(TNo *e, int v){
	
	if(e == NULL){
		
		return;
		
	}
	
	TNo *ptaux = e;
	TNo *ptrem = e->prox;
	
	int pos = 1;
	while(pos != v){
		
		pos = pos + 1;
		ptaux = ptaux->prox;
		ptrem = ptaux->prox;
	}
	
	ptaux->prox = ptrem->prox;
}

TNo* buscar(TNo *e, int v){
	
	if(e == NULL){
		
		return;
		
	}
	
	TNo* ptaux = e->prox;
	while(ptaux != NULL){
		if(ptaux->info == v){
			
			return ptaux;
			
		} else{
			
			ptaux = ptaux->prox;
			
		}
	}
	
	return NULL;
	
}

void exibir(TNo *e){
	
	if(e == NULL){
		
		return;
		
	}
	
	TNo* ptaux = e->prox;
	printf("\n");
	while(ptaux != NULL){
		
		printf("%d ", ptaux->info);
		ptaux = ptaux->prox;
			
		}
}

void mostrarno(TNo *e){
	
	if(e == NULL){
		
		return;
		
	}
	
	printf("%d", e->info);
	
}

/*Extras*/

void inseririni(TNo *e, int v){
	
	TNo *ptnovo = criar(v);
	
	ptnovo->prox = e->prox;
	
	e->prox = ptnovo;
}

TNo* removerini(TNo *e){
	
	TNo* ptrem = e->prox;
	
	e->prox = ptrem->prox;
	
	return ptrem;
	
}

void remover_ordenada_crescente(TNo *e, int v){
	
	if(e == NULL){
		
		return;
		
	}
	
	TNo *ptaux = e;
	
	while(ptaux->prox != NULL){
		
		if(ptaux->prox->info >= v){
			
			ptaux->prox = ptaux->prox->prox;	
			return;
			
		} else{
			
			ptaux = ptaux->prox;
		}
	}
	
}


