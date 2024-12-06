#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int kierunkowy, n1,n2,n3;
    printf("podaj numer telefonu: ");
    int res = scanf("(%2d) %3d-%2d-%2d", &kierunkowy, &n1,&n2,&n3);
    if (res!=4){
        printf("incorrect Input");
        return 1;
    }
    printf("numer kierunkowy:%02d\n Numer telefonu:%03d-%02d-%02d",kierunkowy,n1,n2,n3);

    return 0;
}