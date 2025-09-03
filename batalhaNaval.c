#include <stdio.h>
#define Tnavio 3 

int main() {

    // Tabuleiro 10 x 10
    int tabuleiro[10][10] = {
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},     
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}};

    // Navio 1 na diagonal "\"
    for (int n1 = 0; n1 < Tnavio; n1++){
        tabuleiro[2 + n1][2 + n1] = 3;}

    // Navio 2 na diagonal inversa "/"
    for (int n2 = 0; n2 < Tnavio; n2++){
        tabuleiro[0 + n2][9 - n2] = 3;}

    // Navio 3 na horizontal "_"
    for (int n3 = 0; n3 < Tnavio; n3++){
        tabuleiro[7][0 + n3] = 3;}

    // Navio 4 na vertical "|"
    for (int n4 = 0; n4 < Tnavio; n4++){
        tabuleiro[6 + n4][9] = 3;}

    // Saida do tabuleiro com os navios representado por "3"
    for (int i = 0; i < 10; i++ ){
        for (int j = 0; j < 10; j++){
            printf("%d", tabuleiro[i][j]);
        }printf("\n");
    }
    

    return 0;
}
