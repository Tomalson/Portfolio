#include <stdio.h>
#include <stdlib.h>

int main(){
    float k;
    int m,n=1;
    printf("podaj kwote poczatkowa: ");
    int res1 = scanf("%f",&k);
    if(res1!=1){
        printf("Incorrect input");
        return 1;
    }
    if(k<0){
       printf("Incorrect input");
        return 1; 
    }
    printf("podaj liczbe miesiecy: ");
    int res2 = scanf("%d",&m);
    if (res2!=1){
        printf("Incorrect input");
        return 1;
    }
    if(m<0){
        printf("Incorrect input");
        return 1;
    }
    while(n<=m){
        k=k*1.01;
        n++;
    }
    printf("kwota koncowa %.2f",k);
    return 0;
}
 