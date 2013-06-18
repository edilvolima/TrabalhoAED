/* 
 * File:   main.c
 * Author: Zeff
 *
 * Created on 18 de Junho de 2013, 07:24
 */

#include <stdio.h>
#include <stdlib.h>

#include "tabuleiro.h"

/*
 * 
 */
int main(int argc, char* argv[]) {
    
    FILE *arq;
    arq = fopen(argv[1], "r");
    
    char valor;
    int cont = quant_linhas_arq(argv[1]);
    int temp[cont];
    
    //Identificar nº de linha e nº de colunas do tabuleiro
    ler_linha_arq(temp, argv[1]);
    
       
    //Verifica se tem erro e cria o tabuleiro
    Tabuleiro tabuleiro = cria_tab();
    int i;
    for(i=0; i<2; i++){
        if(temp[i] == 11 ||temp[i] == 0){
            printf("Entrada incorreta!!!\nTenha um bom dia...");
            return 0;
        }else if(cont == 0){
            tabuleiro->largura = temp[i];
            cont++;
        }else if(cont == 1){
            tabuleiro->altura = temp[i];
        }
    }
    
    //Insere os blocos no tabuleiro
    int fim_linha = 0;
    while(fim_linha != cont){
        if(temp[i] == 99){
            fim_linha++;
            i++;;
        }
        if(fim_linha == 1){
            tabuleiro->blocos = cria_bloco(temp[i], temp[i+1],temp[i+2], temp[i+3],temp[i+4]);
            tabuleiro->alvo = tabuleiro->blocos->Lista_bloco->bloco->nome;
            i+=5;
                
        }else if(fim_linha > 1){
            Lista proximo = proximo_lista(tabuleiro->blocos);
            proximo = cria_bloco(temp[i], temp[i+1],temp[i+2], temp[i+3],temp[i+4]);
            
            i+=5;
            
        }
    }
    
    
    
    return (EXIT_SUCCESS);
}

