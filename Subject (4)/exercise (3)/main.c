#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[11];
    for(int i=0;i<11;i++){
        tab[i]=i;
    }
    for(int i=0;i<11;i++){
        printf("%d ",tab[i]);
    }
    printf("\n");

    return 0;
}