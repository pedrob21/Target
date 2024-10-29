#include <stdio.h>
#include <stdlib.h>

int main()
{
    int INDICE = 12, SOMA = 0, K = 1;
    while(K < INDICE){
        K = K + 1;
        SOMA = SOMA + K;
    }
    printf("O resultado final para SOMA eh %d", SOMA);
    return 0;
}
