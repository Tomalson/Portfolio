#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0, l1=100;
    do{
        n++;
        printf("%d ",l1);
        l1--;
    } while(n<=100);

    return 0;
}