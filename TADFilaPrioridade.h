/* Fila com Prioridade

O elemento deve ser inserido ao Final e  deslocado até o local adquado para manter a ordem de prioridade

Por Exemplo - Alta
            - Media
            - Baixa
*/


/* Fila com Prioridade

O elemento deve ser inserido ao Final e  deslocado até o local adquado para manter a ordem de prioridade

Por Exemplo - Alta
            - Media
            - Baixa
*/


#define MAXFILA 10

struct TpElemento{
	char ID;
	int Prioridade; // Alta = 1 | Media = 2 | Baixa = 3
};

struct TpFilaP{
	int FIM;
	TpElemento FILA[MAXFILA];
};

void Inicializar(TpFilaP &F);
char FilaVazia(int Fim);
char FilaCheia(int Fim);
char ElementoInicio(TpFilaP f);
char ElementoFim(TpFilaP f);
void Inserir(TpFilaP &F,char Elemento);
char Retirar(TpFilaP &f);
void ExibirFila(TpFilaP f);






void Inicializar(TpFilaP &F){
	F.FIM = -1;	
}

char FilaVazia(int Fim){
	return Fim==-1;
}

char FilaCheia(int Fim){
	return Fim==MAXFILA-1;
	
}

char ElementoInicio(TpFilaP f){
	return f.Fila[O];
}

char ElementoFim(TpFilaP f){
	return f.Fila[f.FIM]);
}

void Inserir(TpFilaP &F,char Elemento,int P){
	for(int i=F.FIM;!FilaCheia(F.FIM) && F.Fila[F.FIM].Prioridade > P;i--)
	{
	   	 F.Fila[i+1] = F.Fila[i];
	}
	F.Fila[i].ID = Elemento;
	F.Fila[i].Prioridade = P;
	F.FIM++;
}

char Retirar(TpFilaP &f){
	int i;
	char a=f.Fila[0];
	for(i=0; i<f.FIM;i++)
		f.Fila[i] = f.Fila[i+1];
	
    f.FIM--;
	return a;
}

void ExibirFila(TpFilaP f){
	Tpelemento Elem;
	while(!FilaVazia(f.FIM))
	{
		Elem = Retirar(F);
		printf("/n%c /t %d",Elem.ID,Elem.Prioridade);
	}
}
