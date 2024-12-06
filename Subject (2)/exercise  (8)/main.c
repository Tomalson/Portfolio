#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char w1;
    int w2;
    printf("Podaj pole: ");
    int res=scanf("%c%d",&w1,&w2);
    if (res!=2){
        printf("Incorrect input");
        return 1;
    }
    if(w1<'a'||w1>'h'||w2<1||w2>8){
        printf("Incorrect input");
        return 1;
    }
    if((w1=='a'||w1=='c'||w1=='e'||w1=='g')&&(w2==1||w2==3||w2==5||w2==7)){
        printf("black");
    }
    else if ((w1=='b'||w1=='d'||w1=='f'||w1=='h')&&(w2==2||w2==4||w2==6||w2==8)){
        printf("black");
    }
    else {
        printf("white");
    }

    return 0;
}