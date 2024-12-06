#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long long l = 1;
    for (int i = 0; i <= 19; i++){
        printf("10 do potegi %2d = %20llu \n",i, l);
        l*=10;
    }
    return 0;
}