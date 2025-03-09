#include <stdio.h>
#include <string.h>
#include <ctype.h>

int precedence(char op);

int main()
{
    int i, count = 0, top = -1, a = 0, top_pre = -1, b = 0;
    char stack[100];
    char infix[100];
    char rev1[100], rev2[100];
    char pre[100];
    top = -1;
    top_pre = -1;
    while (a == 0)
    {
        printf("Enter the infix expression: ");
        scanf("%s", rev1);
        count = 0;
        for (i = 0; i < strlen(rev1); i++)
        {
            if (rev1[i] != ' ')
            {
                count++;
            }
        }
        if (count <= 100)
        {
            for (i = count - 1; i >= 0; i--)
            {
                infix[count - i - 1] = rev1[i];
            }
            infix[count] = '\0';
            top++;
            stack[top] = ')';
            strcat(infix, "(");
            for (i = 0; infix[i]; i++)
            {
                if (isalnum(infix[i]))
                {
                    top_pre++;
                    pre[top_pre] = infix[i];
                }
                if (infix[i] == '}' || infix[i] == ']' || infix[i] == ')')
                {
                    top++;
                    stack[top] = infix[i];
                }
                if (infix[i] == '{')
                {
                    while (stack[top] != '}' && top > -1)
                    {
                        top_pre++;
                        pre[top_pre] = stack[top];
                        top--;
                    }
                    if (stack[top] == '}')
                    {
                        top--;
                    }
                    else
                    {
                        printf("INVALID EXPRESSION!!!");
                        a = 1;
                        break;
                    }
                }
                else if (infix[i] == '[')
                {
                    while (stack[top] != ']' && top > -1)
                    {
                        top_pre++;
                        pre[top_pre] = stack[top];
                        top--;
                    }
                    if (stack[top] == ']')
                    {
                        top--;
                    }
                    else
                    {
                        printf("INVALID EXPRESSION!!!");
                        a = 1;
                        break;
                    }
                }
                else if (infix[i] == '(')
                {
                    while (stack[top] != ')' && top > -1)
                    {
                        top_pre++;
                        pre[top_pre] = stack[top];
                        top--;
                    }
                    if (stack[top] == ')')
                    {
                        top--;
                    }
                    else
                    {
                        printf("INVALID EXPRESSION!!!");
                        a = 1;
                        break;
                    }
                }
                if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
                {
                    while (top > -1 && stack[top] != ')' && precedence(stack[top]) > precedence(infix[i]))
                    {
                        top_pre++;
                        pre[top_pre] = stack[top];
                        top--;
                    }
                    top++;
                    stack[top] = infix[i];
                }
            }
            
            for (i = 0; i < count; i++)
            {
                if (infix[i] == '(' || infix[i] == ')' || infix[i] == '{' || infix[i] == '}' || infix[i] == '[' || infix[i] == ']')
                {
                    b++;
                }
            }
            count = count - b;
            for (i = count - 1; i >= 0; i--)
            {
                rev2[count - i - 1] = pre[i];
            }
            rev2[count] = '\0';
            a=1;
        }
        else
        {
            printf("Enter Expression having 100 or less characters!!!\n");
        }
    }
    printf("The Prefix Expression is: %s", rev2);
    return 0;
}

int precedence(char op)
{
    switch (op)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}
