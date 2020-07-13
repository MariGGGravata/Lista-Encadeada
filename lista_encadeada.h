typedef struct No TNo;

TNo* criar(int v);
int tamanho(TNo *e);
void inserir(TNo *e, int v);
void remover(TNo *e, int v);
TNo* buscar(TNo *e, int v);
void exibir(TNo *e);
void mostrarno(TNo *e);

/*Extras*/

void inseririni(TNo *e, int v);
TNo* removerini(TNo *e);
void inserirpos(TNo *e, int v, int p);
void removerpos(TNo *e, int v);
void remover_ordenada_crescente(TNo *e, int v);
