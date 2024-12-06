#include <stdio.h>
#include <stdlib.h>

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
    for(int i=0;i<10;i++){
    if(tab[i]%2==0){
        printf("index %d: %d even\n",i,tab[i]);
    }
    if(tab[i]%2!=0){
        printf("index %d: %d odd\n",i,tab[i]);
    }
    }
    return 0;
}