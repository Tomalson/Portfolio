#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float l1, l2;
    printf("wprowadz x\n");
    int res1=scanf("%f",&l1);
        if(res1!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("wprowadz y\n");
    int res2=scanf("%f",&l2);
    if(res2!=1){
        printf("Incorrect input");
        return 1;
    }
    printf("suma: %f\n",l1+l2);
    printf("roznica: %f\n",l1-l2);
    printf("iloczyn: %f\n",l1*l2);
    if (l2){
    printf("iloraz: %f\n",l1/l2);
    }
    else{
    printf("Operation not permitted");
    }
    return 0;
}
