#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int l;
printf("podaj liczbe ");
int res = scanf("%d",&l);
if (!res){
    printf("incorrect input");
    return 1;
}

if(!l){
    printf("Equal to zero");
}
else{
    printf("Not equal to zero");
}
    return 0;
}