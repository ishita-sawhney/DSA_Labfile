#include <stdio.h>

int main()
{
    int ch,n,i,j,top1,top2,b=0,c,d,e,f;
    int num,a=0,val,st,pop,peep,display;
    int stack[50];
    while(b==0)
    {
        printf("Enter the number of elements in the stack (Maximum 50): ");
        scanf("%d",&n);
        if(n<=50)
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
            top1=j-1;
            top2=50;
            while(a==0)
            {
                c=0;
                d=0;
                e=0;
                f=0;
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
                    while (c==0)
                    {
                        printf("1: PUSH IN STACK 1 \n");
                        printf("2: PUSH IN STACK 2 \n");
                        printf("Enter your choice: ");
                        scanf("%d",&st);
                        if (st==1 || st==2)
                        {
                            switch(st)
                            {
                                case 1:
                                if (top2-top1==1)
                                {
                                    printf("STACK IS FULL, CANNOT INSERT MORE ELEMENTS!!!\n");
                                    break;
                                }
                                else
                                {
                                    top1++;
                                    printf("Enter the element to be added in the stack: ");
                                    scanf("%d",&num);
                                    stack[top1]=num;
                                }
                                c=1;
                                break;
                                
                                case 2:
                                if (top2-top1==1)
                                {
                                    printf("STACK IS FULL, CANNOT INSERT MORE ELEMENTS!!!\n");
                                    c=1;
                                    break;
                                }
                                else
                                {
                                    top2--;
                                    printf("Enter the element to be added in the stack: ");
                                    scanf("%d",&val);
                                    stack[top2]=val;
                                }
                                c=1;
                                break;
                            }
                        }
                        else
                        {
                            printf("Enter a VALID CHOICE!!!\n");
                        }
                    }
                    break;
                    
                    case 2:
                    while (d==0)
                    {
                        printf("1: POP FROM STACK 1 \n");
                        printf("2: POP FROM STACK 2 \n");
                        printf("Enter your choice: ");
                        scanf("%d",&pop);
                        if(pop==1 ||pop==2)
                        {
                            switch(pop)
                            {
                                case 1:
                                if (top1==-1)
                                {
                                    printf("STACK IS EMPTY, NO ELEMENT IN STACK");
                                }
                                else
                                {
                                    top1--;
                                }
                                d=1;
                                break;
                                
                                case 2:
                                if (top2==50)
                                {
                                    printf("STACK IS EMPTY, NO ELEMENT IN STACK");
                                }
                                else
                                {
                                    top2++;
                                }
                                d=1;
                                break;
                            }
                        }
                        else
                        {
                            printf("Enter a VALID CHOICE!!!\n");
                        }
                    }
                    break;
                    
                    case 3:
                    while(e==0)
                    {
                        printf("1: PEEP FROM STACK 1 \n");
                        printf("2: PEEP FROM STACK 2 \n");
                        printf("Enter your choice: ");
                        scanf("%d",&peep);
                        if (peep==1 ||peep==2)
                        {
                            switch(peep)
                            {
                                case 1:
                                if (top1==-1)
                                {
                                    printf("STACK IS EMPTY, NO ELEMENT TO RETURN");
                                }
                                else
                                {
                                    printf("Element on top of the stack is: %d",stack[top1]);
                                }
                                e=1;
                                break;
                                
                                case 2:
                                if (top2==50)
                                {
                                    printf("STACK IS EMPTY, NO ELEMENT TO RETURN");
                                }
                                else
                                {
                                    printf("Element on top of the stack is: %d",stack[top2]);
                                }
                                e=1;
                                break;
                            }
                        }
                        else
                        {
                            printf("Enter a VALID CHOICE!!!\n");
                        }
                    }
                    break;
                    
                    case 4:
                    while(f==0)
                    {
                        printf("1: DISPLAY STACK 1 \n");
                        printf("2: DISPLAY STACK 2 \n");
                        printf("Enter your choice: ");
                        scanf("%d",&display);
                        if (display==1||display==2)
                        {
                            switch(display)
                            {
                                case 1:
                                if (top1==-1)
                                {
                                    printf("STACK IS EMPTY, NO ELEMENT TO DISPLAY");
                                }
                                else
                                {
                                    for (i=0;i<=top1;i++)
                                    {
                                    printf("%d ", stack[i]);
                                    }
                                }
                                f=1;
                                break;
                                
                                case 2:
                                if (top2==50)
                                {
                                    printf("STACK IS EMPTY, NO ELEMENT TO DISPLAY");
                                }
                                else
                                {
                                    for (i=49;i>=top2;i--)
                                    {
                                    printf("%d ", stack[i]);
                                    }
                                }
                                f=1;
                                break;
                            }
                        }
                        else
                        {
                            printf("Enter a VALID CHOICE!!!\n");
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
            printf("50 OR LESS THAN 50 ELEMENTS CAN BE ADDED TO STACK. PLEASE ENTER A VALID VALUE!!!\n");
        }
    }
    return 0;
}
