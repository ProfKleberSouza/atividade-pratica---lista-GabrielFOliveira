typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;

typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;