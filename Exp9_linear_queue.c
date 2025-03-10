#include <stdio.h>
#include <stdbool.h>
int main()
{
    int ch,n,i,j,rear,front;
    int num,a=0,b=0;
    int queue[10];
    while (a==0)
    {
        printf("Enter the number of elements in the queue (Maximum 10): ");
        scanf("%d",&n);
        if (n<=10)
        {
            for (i=0;i<n;i++)
            {
                printf("Enter element of the index[%d]: ",i);
                scanf("%d", &queue[i]);
            }
            printf("The queue is: ");
            for (j=0;j<n;j++)
            {
                printf("%d ",queue[j]);
            }
            rear=j-1;
            front=0;
            while(b==0)
            {
                printf("\n               MENU               \n");
                printf("1: ENQUEUE \n");
                printf("2: DEQUEUE \n");
                printf("3: PEEP  \n");
                printf("4: DISPLAY \n");
                printf("5: EXIT \n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1: 
                    if (rear==9)
                    {
                        printf("QUEUE IS FULL, CANNOT INSERT MORE ELEMENTS!!!");
                    }
                    else
                    {
                        rear++;
                        printf("Enter the element to be added in the queue: ");
                        scanf("%d",&num);
                        queue[rear]=num;
                    }
                    
                    break;
                    
                    case 2:
                    if (rear==front)
                    {
                        printf("QUEUE IS EMPTY, NO ELEMENT IN QUEUE");
                    }
                    else
                    {
                        front++;
                    }
                
                    break;
                    
                    case 3:
                    if (rear==front)
                    {
                        printf("QUEUE IS EMPTY, NO ELEMENT TO RETURN");
                    }
                    else
                    {
                        printf("Element on top of the QUEUE is: %d",queue[rear]);
                    }
                    break;
                    
                    case 4:
                    if (rear==front)
                    {
                        printf("QUEUE IS EMPTY, NO ELEMENT TO DISPLAY");
                    }
                    else
                    {
                        for (i=front;i<=rear;i++)
                        {
                        printf("%d ", queue[i]);
                        }
                    }
                    
                    break;
                    
                    case 5: 
                    {
                        a=1;
                        b=1;
                        break;
                    }    
                    
                    default: 
                    printf("Please enter a valid Value!!!");
                    break;
                }
            }
        }
        else
        {
            printf("QUEUE CAN TAKE ELEMENTS ONLY UPTO 10\nPLEASE ENTER A VALID A VALUE!!!\n");
        }
    }
    return 0;
}
