#include "tabuleiro.h"
#include  "lista.h"

 void cria_tab(int altura, int largura, char alvo){
    Tabuleiro tab = (Tabuleiro *) malloc(sizeof (Tabuleiro)); 
    tab->altura = altura;
    tab->largura = largura;
    tab->alvo = alvo;
    tab->blocos = NULL;
    tab->mov = NULL;
    
}
  


