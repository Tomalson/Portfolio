#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int d,m,y;
    printf("podaj date w formacie (dd-mm-rrrr): ");
    int res = scanf("%2d-%2d-%4d",&d,&m,&y);
    if (res!=3){
        printf("Incorrect input\n");
        return 1;
    }
    if (d<=0||m<=0||m>12||y<=0){
        printf("incorrect\n");
    }
    else if(m==2&&y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)){
        printf("Correct\n");
    }
    else if(m==2&&d>=29){
        printf("incorrect\n");
    }
    else if((m==4||m==6||m==9||m==11)&&d>30){
        printf("incorrect\n");
    }
    else if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>31){
        printf("incorrect\n");
    }
    else{
        printf("Correct\n");
    }


    return 0;
}