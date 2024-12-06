#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l1 = 0, l2 = 0;
    {
        for(int i1 = 0;i1<=10;i1++){

            for(int i2 = 0;i2<=10;i2++){
                int wynik=l1*l2;
                printf("%2d*%2d=%3d\n",l1,l2,wynik);
                l2++;
            }
            l1++;
            l2=0;
        }
    }
    return 0;
}