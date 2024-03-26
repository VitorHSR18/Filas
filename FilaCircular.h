#define MAXFILA 10

struct TpFila{
	char  Fila[MAXFILA];
	int INICIO,FIM,cont=0;
};

void Inicializar(TpFila &F);
char FilaVazia(int Fim);
char FilaCheia(int Fim);
char ElementoInicio(TpFila f);
char ElementoFim(TpFila f);
void Inserir(TpFila &F,char Elemento);
char Retirar(TpFila &f);
void ExibirFila(TpFila f);


void Inicializar(TpFila &F){
	F.FIM = -1;
	F.INICIO=0;	
}

char FilaVazia(TpFila F){
	return cont == 0;
}

char FilaCheia(TpFila Fim){
	return cont == MAXPILHA;// Só se o retira e o inserir estiver corretos
	
}

char ElementoInicio(TpFila f){
	return f.Fila[O];
}

char ElementoFim(TpFila f){
	return f.Fila[f.FIM]);
}

void Inserir(TpFila &F,char Elemento){
	F.Fila[++F.FIM] = Elemento;
	cont++;
}

char Retirar(TpFila &F){
	return F.Fila[F.INICIO++];
	cont--;
}

void ExibirFila(TpFila f){
	while(!FilaVazia)
		printf("\t %c",Retirar(f));
}

char RetornarInicio(TpFila F){
	return F.Fila[F.INICIO];
}

char RetornarFim(TpFila F){
	return F.Fila[F.FIM]
}

