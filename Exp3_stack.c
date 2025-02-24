#include <stdio.h>
#include <stdbool.h>
int main()
{
    int ch,n,i,j,top;
    int num,a=0,b=0;
    int stack[10];
    while(b==0)
    {
        printf("Enter the number of elements in the stack (Maximum 10): ");
        scanf("%d",&n);
        if(n<=10)
        {
            for (i=0;i<n;i++)
            {
                printf("Enter element of the index[%d]: ",i);
                scanf("%d", &stack[i]);
            }
            printf("The stack is: ");
            for (j=0;j<n;j++)
            {
                printf("%d ",stack[j]);
            }
            top=j-1;
            while(a==0)
            {
                printf("\n               MENU               \n");
                printf("1: PUSH IN STACK \n");
                printf("2: POP FROM STACK \n");
                printf("3: PEEP FROM STACK \n");
                printf("4: DISPLAY \n");
                printf("5: EXIT \n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1: 
                    if (top==9)
                    {
                        printf("STACK IS FULL, CANNOT INSERT MORE ELEMENTS!!!");
                    }
                    else
                    {
                        top++;
                        printf("Enter the element to be added in the stack: ");
                        scanf("%d",&num);
                        stack[top]=num;
                    }
                    
                    break;
                    
                    case 2:
                    if (top==-1)
                    {
                        printf("STACK IS EMPTY, NO ELEMENT IN STACK");
                    }
                    else
                    {
                        top--;
                    }
                
                    break;
                    
                    case 3:
                    if (top==-1)
                    {
                        printf("STACK IS EMPTY, NO ELEMENT TO RETURN");
                    }
                    else
                    {
                        printf("Element on top of the stack is: %d",stack[top]);
                    }
                    break;
                    
                    case 4:
                    if (top==-1)
                    {
                        printf("STACK IS EMPTY, NO ELEMENT TO DISPLAY");
                    }
                    else
                    {
                        for (i=0;i<=top;i++)
                        {
                        printf("%d ", stack[i]);
                        }
                    }
                    
                    break;
                    
                    case 5: a=1;
                    b=1;
                    break;
                    
                    default: 
                    printf("Please enter a valid Value!!!");
                    break;
                }
            }
        }
        else
        {
            printf("ELEMENTS IN STACK CANT BE GREATER THAN 10!!!\nRE-ENTER THE NUMBER OF ELEMENTS IN THE STACK\n");
        }
    }
    return 0;
}
