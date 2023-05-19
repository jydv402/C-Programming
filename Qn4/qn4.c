//Find the Largest Number (integer) among Three Numbers (integers) using IF and Logical && operator.

#include <stdio.h>

void main(){
    int a,b,c;

    printf("Enter the three numbers here : ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("\n%d is the larget number\n",a);
    }

    else if (b>a && b>c)
    {
        printf("\n%d is the larget number\n",b);
    }

    else
    {
        printf("\n%d is the larget number\n",c);
    }
    
}