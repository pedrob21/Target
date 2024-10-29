#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[999], c;
    int i=0, count=0;
    printf("Digite sua palavra: ");
    while((c=getchar())!='\n' && count<999){
        str[i++]=c;
    }
    str[i]='\0';
    int tam=i;
    for(int j=0;j<i;j++){
        if(str[j]=='A' || str[j]=='a'){
            count++;
        }
    }
    if(count!=0){
        printf("A palavra tem %d letra(s) A", count);
    }
    else{
        printf("A letra A nao faz parte da palavra");
    }
    return 0;
}
