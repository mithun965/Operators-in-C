#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    int b=11;
    printf("Value of a=%d\n",a);
    printf("Value of b=%d\n",b);
    a=b--;
    printf("Updated value of a=%d\n",a);
    printf("Updated value of b=%d\n",b);
    printf("End of program");
}