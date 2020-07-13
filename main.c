#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	
	TNo *ptl = criar(-1);
	
	inserir(ptl, 10);
	inserir(ptl, 20);
	inserir(ptl, 30);
	
	exibir(ptl);
	
	remover_ordenada_crescente(ptl, 11);
	exibir(ptl);
	
	
	/*
	inserirpos(ptl, 15, 2);
	exibir(ptl);
	
	inserirpos(ptl, 25, 4);
	exibir(ptl);
	
	removerini(ptl);
	exibir(ptl);
	
	inseririni(ptl, 10);
	exibir(ptl);
	
	removerpos(ptl, 2);
	exibir(ptl);
	
	removerpos(ptl, 3);
	exibir(ptl);
	
	*/
	/*
	remover(ptl, 20);
	exibir(ptl);
	
	printf("\n-------------------\n");
	buscar(ptl, 20);
	printf("\n-------------------\n");
	*/
	
	
		
	return 0;
}
