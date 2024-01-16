#include<stdio.h>
#include<conio.h>
int main()
{
    int y,x;
    y=10;
    x=11;
    y=x++;
    printf("Value of y=%d\n",y);
    printf("Value of x=%d\n",x);
    printf("Updated value of y=%d\n",y);
    printf("Updated value of x=%d\n",x);
}