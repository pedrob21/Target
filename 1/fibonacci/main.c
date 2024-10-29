#include <stdio.h>
#include <stdlib.h>

fibonacci(int num){
    int t1=0, t2=1, prox=0;
    printf("%d %d ", t1, t2);
    while(prox<num){
        prox = t1+t2;
        t1=t2;
        t2=prox;
        printf("%d ", prox);
        if(prox==num) return 1;
    }
    return 0;
}

int main()
{
    int num;
    printf("Digite o número que deseja buscar: ");
    scanf("%d", &num);
    int pertence=fibonacci(num);
    if(pertence==1){
        printf("\nO numero pertence a sequencia!\n");
    }
    else{
        printf("\nO numero nao pertence a sequencia!\n");
    }
    return 0;
}
