#include <stdio.h>
#include <stdlib.h>


int main(){
    unsigned long long l = 1;
    for(int i=0;i<=19;i++){
        printf("%llu ",l);
        l*=10;
    }
    return 0;
}