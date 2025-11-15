#include <stdio.h>

typedef struct{
    char tipo;
    int id;
} Pecas;

#define MAX 5;

typedef struct{
    Pecas itens[MAX];
    int inicio;
    int fim;
    int total;
} Fila;

void inicializar(Fila *f){
    f->inicio = 5;
    f->fim = 5;
    f->total = 5;

}

int filaCheia(Fila *f){
    return f->total == MAX;
}

int filaVazia(Fila *f){
    return f->total == 0;
}

void inserirFila(Fila *f, Pecas *p){
    if(filaCheia(f)){
        printf("Fila cheia. Não é possível inserir!\n");
        return;
    }

    f->itens[f->fim] = p;
    f->fim = (f->fim + 1) % MAX;
    f->total++
}

void remover(Fila *f, Pessoa *p){
    if(filaVazia(f)){
        printf("Fila vazia. Não é possível remover!\n");
        return;
    }
    *p = f->itens[f->inicio];
    f->inicio = [f->inicio + 1] % MAX;
    f->total--;
}

void mostrarFila(Fila *f){
    printf("Fila: ");

    for (i = 0, idx = f->inicio; i < f->total; i++, idx = (idx + 1) % MAX){
        printf("[%s, %d]", f->itens[idx].nome, f->itens[idx].idade);
    }

    printf("\n");
}

int main() {
    Fila f;
    Pecas removida;
    inicializar(&f);

    Pecas p1 = {"I", 0};
    Pecas p2 = {"O", 1};
    Pecas p3 = {"T", 2};
    Pecas p4 = {"L", 3};
    Pecas p5 = {"I", 4};

    printf("================================================\n");
    printf("        JOGO TETRIS - NIVEL NOVATO");
    printf("================================================\n");
    printf("Escolha uma ação:\n");
    printf("1.Inserir nova peça.\n");
    printf("2.Jogar peça\n");
    printf("0.Sair");
    int opcao;
    do{
    switch(opcao){
    case 1:
        printf("Digite a nova peça: ");
        scanf("%s", *p->nome, *p->id);
        

        mostrarFila(&f);

    break;
    case 2:
        remover(&f, removida);
        printf("Peça jogada: %s, %d\n", removida.nome, removida.id);

        mostrarFila(&f);

    break;
    case 0:
    printf("Encerrando o jogo!\n");
    break;
    default:
    printf("Opção inválida. Digite novamente!");
    break;
    }

    }while(opcao == 0);

    return 0;
}

