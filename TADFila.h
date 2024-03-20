/*

Estruturas de dados com disciplna de acesso do tipo

Fila

Conceito: "FIFO"
			First int , First Out
			
O acesso aos elementos da FILA ocorre nas duas extremidades das EDS,sendo que : Inicio > apenas retiradas;
																				Fim > Apenas Inserções
																				
Exemplo de uso : Inico fixado em Zero!
Inicializar> Inicio = 0 
			 Fim = -1
			 
Inserir > M

| M |   |   |   |   |

Inserir > K

| M | K |   |   |   |

Retirar > obrigatoriamente o elemento do inicio retornando - o!!

Portanto , deve-se retornar M e os demais devem ser deslocados uma posição

| K | A |   |   |   |

Inserir > P

| K | A | P |   |   |


*/


#define MAXFILA 10

struct TpFila{
	char  Fila[MAXFILA];
	int FIM;
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
}

char FilaVazia(int Fim){
	return Fim==-1;
}

char FilaCheia(int Fim){
	return Fim==MAXFILA-1;
	
}

char ElementoInicio(TpFila f){
	return f.Fila[O];
}

char ElementoFim(TpFila f){
	return f.Fila[f.FIM]);
}

void Inserir(TpFila &F,char Elemento){
	F.Fila[++F.FIM] = Elemento;
}

char Retirar(TpFila &f){
	int i;
	char a=f.Fila[0];
	for(i=0; i<f.FIM;i++)
		f.Fila[i] = f.Fila[i+1];
	
    f.FIM--;
	return a;
}

void ExibirFila(TpFila f){
	while(!FilaVazia)
		printf("\t %c",Retirar(f));
}
