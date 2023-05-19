//Evaluate the arithmetic expression 
//((a -b / c * d + e) * (f +g)) and display its solution.
// Read the values of the variables from the user through console.

#include <stdio.h>

void main(){
    int a,b,c,d,e,f,g;
    float rslt;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    printf("Enter the value of c : ");
    scanf("%d",&c);

    printf("Enter the value of d : ");
    scanf("%d",&d);

    printf("Enter the value of e : ");
    scanf("%d",&e);

    printf("Enter the value of f : ");
    scanf("%d",&f);

    printf("Enter the value of g : ");
    scanf("%d",&g);

    rslt = ((a - b / c * d + e) * (f + g));

    printf("The solution is %0.2f\n", rslt);
}