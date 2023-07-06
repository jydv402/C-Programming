#include<stdio.h>
void main()
{
    int A[20][20],B[20][20],C[20][20],r1,r2,c1,c2,i,j,k;
    printf("Enter the order of first matrix:");
    scanf("%d%d",&r1,&c1);
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Enter the elements for first matrix:");
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the order of second matrix:");
    scanf("%d%d",&r2,&c2);
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Enter the elements for second matrix:");
            scanf("%d",&B[i][j]);
        }
    }
    printf("The first matrix is: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }
    if((r1!=r2)||(c1!=c2))
    {
        printf("Matrix addition is not possible");
        exit(1);
    }
    printf("The sum of two matrices is \n");
    C[i][j]=0;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d \t",C[i][j]);
        }
        printf("\n");
    }
    printf("The product of two matrices is \n");
    if(c1!=r2)
    {
      printf("Matrix multiplication is not possible");
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
          C[i][j]=0;
          for(k=0;k<r1;k++)
          {
            C[i][j]=C[i][j]+A[i][k]*B[k][j];
          }
        printf("%d \t",C[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the first matrix is\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d\t",A[j][i]);
        }
        printf("\n");
    }
}