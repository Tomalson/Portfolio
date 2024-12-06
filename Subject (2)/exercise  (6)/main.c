#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int l1,l2;
    printf("Podaj pierwsza liczbe calkowita: ");
    int res1 = scanf("%d",&l1);
    if(res1!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("Podaj druga liczbe calkowita: ");
    int res2 = scanf("%d",&l2);
    if(res2!=1){
        printf("Incorrect input");
        return 1;
    }
    if(!l2){
        printf("Operation not permitted");
        return 1;
    }
    if(l1%l2==0){
        printf("%d is divisible by %d",l1,l2);
    }
    else {
        printf("%d Is not divisible by %d",l1,l2);
    }
    return 0;
}