#include "lista.h"



typedef struct tabuleiro{
    int largura;
    int altura;
    Lista *blocos;
    Movimento mov;
    char chave[];
    char alvo;
}Tabuleiro;

void cria_tab(int altura, int largura, char alvo);

