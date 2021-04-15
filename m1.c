#include "lista.h" 

Celula *new_celula(){
  Celula *tmp = (Celula*) malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}


void new_lista(Lista *l){

  Celula *nova = new_celula();

  l->inicio = nova;
  l->fim = nova;
  l->tam = 0;
}