typedef struct bloco{
    int linha;
    int coluna;
    int largura;
    int altura;
    char movimento;
    char nome;
}Bloco;

Bloco cria_bloco(int linha, int coluna, int largura, int altura, char movimento);

