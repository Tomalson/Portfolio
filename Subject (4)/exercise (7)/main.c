#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int tab[10];
    for(int i=0;i<10;i+=2){
        printf("wprowadz liczby calkowite o indeksach %d i %d oddzielone spacja: ",i,i+1);
    int res =scanf("%d %d",&tab[i],&tab[i+1]);
    if(res!=2){
        printf("Input data type error");
        return 1;
    }
    }
    for (int i = 0; i <10; i++){
        if(tab[i]<=1){
            printf("index %d: %d other\n", i, tab[i]);
            continue;
        }
        int c = 1;
            for (int j = 2; j <= sqrt(tab[i]); j++) {
                if (tab[i] % j == 0) {
                    c = 0; 
                    break;
                }
            }
            if(c){
            printf("index %d: %d prime\n",i,tab[i]);
        }
        else{
            printf("index %d: %d composite\n",i,tab[i]);

    }
    }
    return 0;
}
