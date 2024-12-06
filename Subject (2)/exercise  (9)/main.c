#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int l1, l2;
    printf("wprowadz x\n");
    int res1=scanf("%d",&l1);
        if(res1!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("wprowadz y\n");
    int res2=scanf("%d",&l2);
    if(res2!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("suma: %d\n",l1+l2);
    printf("roznica: %d\n",l1-l2);
    printf("iloczyn: %d\n",l1*l2);
    if (l2){
    printf("iloraz: %d\n",l1/l2);
    }
    else{
    printf("Operation not permitted");
    }
    return 0;
}
