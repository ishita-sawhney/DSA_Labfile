#include <stdio.h>
#include <string.h>
#include <ctype.h>

int precedence(char op) {
    switch (op) {
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

int main() 
{
    char stack[100];  
    char post[100];  
    int top = -1, top_post = -1;
    char par[100];    
    printf("Enter the infix expression: ");
    scanf("%s", par);
    post[0] = '\0';
    top++;
    stack[top] = '(';
    strcat(par, ")");
    for (int i = 0; par[i]; i++) 
    {
        if (isalnum(par[i])) 
        {  
            top_post++;
            post[top_post] = par[i];
        } 
        else if (par[i] == '(' || par[i] == '{' || par[i] == '[') 
        {
            top++;
            stack[top] = par[i];
        } 
        else if (par[i] == ')' || par[i] == '}' || par[i] == ']') 
        {
            while (top >= 0 && stack[top] != '(' && stack[top] != '{' && stack[top] != '[') 
            {
                top_post++;
                post[top_post] = stack[top];
                top--;
            }
            if (top >= 0 && (stack[top] == '(' || stack[top] == '{' || stack[top] == '[')) 
            {
                top--; 
            } 
            else 
            {
                printf("INVALID EXPRESSION: Mismatched parentheses!\n");
                return 1;
            }
        } 
        else if (par[i] == '+' || par[i] == '-' || par[i] == '*' || par[i] == '/' || par[i] == '^') 
        {
            while (top >= 0 && precedence(stack[top]) >= precedence(par[i])) 
            {
                top_post++;
                post[top_post] = stack[top];
                top--;
            }
            top++;
            stack[top] = par[i];
        }
    }
    post[top_post + 1] = '\0';

    printf("The Postfix Expression is: %s\n", post);
    return 0;
}