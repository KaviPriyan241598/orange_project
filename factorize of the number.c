#include<stdio.h>
void main()
{
     int i,num,fact=1;
    printf("enter the number:");
    scanf("%d",&num);

        for(i=1;i<=num;i++)
    {
       fact=fact*i;
       }
        printf(" factorial of the number %d",fact);


    }

