#include<stdio.h>
int main()
{
    int x = 20 ,y = 10;
    printf("x : %d , y : %d \n",x,y);

    x = x+y;
    y = x-y;
    x = x-y;

    printf("x : %d , y : %d",x,y);

    return 0;
}
