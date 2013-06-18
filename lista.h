
#include "movimento.h"
#include "bloco.h"


union Lista{
        struct lista_mov{
            struct Movimento movimento;
            struct Lista *proximo;
        }Lista_mov;
        
        struct lista_bloco{
            struct Bloco bloco;
            struct Lista *proximo;
        }Lista_bloco;
        
        struct lista_tabuleiro{
            struct Tabuleiro tabuleiro;
            struct Lista *proximo;
        }Lista_tabuleiro;
    
};

void  cria_lista();

Lista* proximo_lista();