#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("podaj 2 liczby calkowite oddzielone spacja: ");
    int l1,l2;
    int res = scanf("%d %d",&l1,&l2);
    if (res!=2){
        printf("incorrect input");
        return 1;
    }
    printf("%d",l1+l2);
    return 0;
}