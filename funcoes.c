
#include <stdio.h>
#include <stdlib.h>

void ler_linha_arq(int *temp, char arquivo[]){
    FILE *arq;
    arq = fopen(arquivo, "r");
    
    int cont = 0;
    char valor;
    
    while((valor = fgetc(arq)) != EOF){
        if(valor == '\n'){
            temp[cont] = 99;
            cont++;
        }else if(valor == '-'){
            temp[cont] = 11;
            cont++;
        }else{
             temp[cont] = valor - 48;
             cont++;
        }
    }
}

int quant_linhas_arq(char arquivo[]){
    FILE *arq;
    arq = fopen(arquivo, "r");
    
    int linhas = 0;
    char valor;
    while((valor = fgetc(arq)) != EOF){
        if(valor == '\n'){
            linhas++;
        }
    }
    return linhas+1;
} 


