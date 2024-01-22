#include <stdio.h>
char p[100], q[100], s[100];
int top = -1, i = 0, j = 0;

int prec(char ch)
{
    switch (ch)
    {
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

int push(char x)
{
    top++;
    s[top] = x;
}

char pop()
{
    char x;
    x = s[top];
    top--;
    return x;
}

void main()
{
    printf("Enter the infix expression:\n\t ");
    fgets(q, 100, stdin);

    while (q[i] != '\0')
    {
        // Check whether it is an operand and push directly to the Postfix array
        if ((q[i] >= 'a' && q[i] <= 'z') || (q[i] >= 'A' && q[i] <= 'Z'))
        {
            p[j] = q[i];
            j++;
        }

        // Push a '(' to the stack
        else if (q[i] == '(')
        {
            push(q[i]);
        }

        // Continuosly pop the operands in the stack until a '(' is found
        else if (q[i] == ')')
        {
            while (s[top] != '(')
            {
                p[j] = pop();
                j++;
            }
            pop();
        }

        // If all the above conditions are not satisfied, It surely must be one among +, -, *, /, ^
        // Check the precedence of the operator in the stack

        /*If the precedence of the operator in the stack is greater than or equal to
        the precedence of the operator in the expression add it to the postfix expression */

        // Push the operator in the stack
        else
        {
            while (prec(s[top]) >= prec(q[i]))
            {
                p[j] = pop();
                j++;
            }
            push(q[i]);
        }
        i++;
    }

    /*The stack may still have some operators in it.
    Pop them and add them to the postfix expression*/
    while (top != -1)
    {
        p[j] = pop();
        j++;
    }

    printf("\n\nThe postfix expression is:\n\t%s\n", p);
}