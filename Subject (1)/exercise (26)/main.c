#include <stdio.h>
#include <stdlib.h>

int main(){
    int d,m,r;
    char* space = "  ";
    char* space1 = " ";
    printf("Podaj date:");
    scanf("%2d-%2d-%4d",&d,&m,&r);
    printf("Day:%s%s%s%02d\nMonth:%s%s%02d\nYear:%s%04d",space1,space,space,d,space1,space,m,space,r);
    return 0;
}