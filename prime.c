#include<stdio.h>
void main()
{
    int a,i,c=0;
    printf("enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("given number is prime ");
    }
    else
    {
        printf("given number is not prime");
    }
