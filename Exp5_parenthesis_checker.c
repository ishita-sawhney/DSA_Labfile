#include <stdio.h>
#include <string.h>

int main() 
{
    int i,top=-1,a=0,b=0;
    char stack[20], par[20];
    while (a==0) 
    {
        printf("\nEnter the parenthesis expression: ");
        scanf("%s",par);
        int len=strlen(par);
        for(i=0;i<len;i++)
        {
            if (par[i]!='{'&&par[i]!='}'&&par[i]!='('&&par[i]!=')'&&par[i]!='['&&par[i]!=']')
            {
                printf("PLEASE ENTER A VALID EXPRESSION!!!\n");
                b=0;
                break;
            }
            if (i==(len-1))
            {
                b=1;
            }
        }
        if (!b) continue;
        if (len>20) 
        {
            printf("Enter Parenthesis Expression having 20 or fewer characters!\n");
            continue;
        }
        top=-1;  
        for (i=0;i<len;i++) 
        {
            char ch = par[i];
            if (ch=='{' || ch=='[' || ch=='(') 
            {
                if (top==19) 
                {
                    printf("Stack Overflow! Too many nested parentheses.\n");
                    a=1;
                    break;
                }
                stack[++top] = ch;  
            } 
            else 
            {
                if (top==-1) 
                {
                    printf("PARENTHESIS UNBALANCE!!! (Extra closing bracket)\n");
                    a=1;
                    break;
                }
                char topChar = stack[top];
                if ((ch=='}' && topChar=='{') || (ch==']' && topChar=='[') || (ch==')' && topChar=='(')) 
                {
                    top--;  
                } 
                else 
                {
                    printf("PARENTHESIS UNBALANCE!!! (Mismatched brackets)\n");
                    a=1;
                    break;
                }
            }
        }
        if (a==0 && top==-1) 
        {
            printf("PARENTHESIS IS BALANCED\n");
        } 
        else if (top!=-1) 
        {
            printf("PARENTHESIS UNBALANCE!!! (Too many opening brackets)\n");
        }
        a=1;  
    }
    return 0;
}
