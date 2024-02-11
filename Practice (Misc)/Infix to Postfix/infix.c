#include <stdio.h>

char q[100] , p[100], s[50];
int top = -1;
int i = 0, j = 0;

int prec(char ch)
{
    switch (ch){
        case '(':
        return 0;

        case '+':
        case '-':
        return 1;

        case '*':
        case '/':
        return 2;

        case '^':
        return 3;
    }

}

void push(char x)
{
    top++;
    s[top] = x;
}

char pop()
{
    char y;
    y = s[top];
    top--;
    return y;
}

void main(){
    

    printf("Enter the infix expression: ");
    fgets(q,100,stdin);

    while(q[i] != '\0')
    {
        if((q[i]>= 'a' && q[i] <= 'z') || (q[i] >= 'A' && q[i] <= 'Z'))
        {
            p[j] = q[i];
            j++;
        }

        else if(q[i] == '(')
        {
            push(q[i]);
        }

        else if(q[i] == ')')
        {
            while(s[top] != '(')
            {
                p[j] = pop();
                j++;
            }
            pop();
        }

        else
        {
            while(prec(s[top] )>= prec(q[i]))
            {
                p[j] = pop();
                j++;
                
            }
            push(q[i]);
        }
        i++;
    }

    while(top != -1)
    {
        p[j] = pop();
        j++;
    }

    printf("\n\nThe postfix expression is:\n\t%s\n", p);
}