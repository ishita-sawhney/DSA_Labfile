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
            rear=-1;;
            front=-1;
            while(b==0)
            {
                printf("\n               MENU               \n");
                printf("1: ENQUEUE \n");
                printf("2: DEQUEUE \n");
                printf("3: DISPLAY \n");
                printf("4: EXIT \n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1: 
                    if (rear==-1 && front==-1)
                    {
                        front=rear=0;
                        printf("Enter the element to be added in the queue: ");
                        scanf("%d",&num);
                        queue[rear]=num;
                    }
                    else if (((rear+1)%n==front) || (front==0 && rear==n))
                    {
                        printf("QUEUE IS FULL, CANNOT INSERT MORE ELEMENTS!!!");
                    }
                    else if (rear==n-1 && front!=0)
                    {
                        rear=0;
                        printf("Enter the element to be added in the queue: ");
                        scanf("%d",&num);
                        queue[rear]=num;
                    }
                    else
                    {
                        rear=(rear+1)%n;
                        printf("Enter the element to be added in the queue: ");
                        scanf("%d",&num);
                        queue[rear]=num;
                    }
                    break;
                    
                    case 2:
                    if (front==-1 && rear==-1)
                    {
                        printf("QUEUE IS UNDERFLOW");
                    }
                    if (rear==front)
                    {
                        front=rear=-1;
                    }
                    else 
                    {
                        if (front==0 && rear==n+1)
                        {
                            rear=0;
                        }
                        printf("The number deleted is: %d",queue[front]);
                        front=(front+1)%n;
                    }
                
                    break;
                    
                    case 3:
                    if (front==-1 && rear==-1)
                    {
                        printf("QUEUE IS EMPTY, NO ELEMENT TO DISPLAY");
                    }
                    else
                    {
                        printf("Circular Queue is: ");
                        if (front<rear)
                        {
                            for(i=front;i<=rear;i++)
                            {
                                printf(" %d",queue[i]);
                            }
                        }
                        else
                        {
                            for(i=front;i<n;i++)
                            {
                                printf(" %d",queue[i]);
                            }
                            for(i=0;i<=rear;i++)
                            {
                                printf(" %d",queue[i]);
                            }
                        }
                    }
                    break;
                    
                    case 4: 
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