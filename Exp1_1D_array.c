#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{
    char w;
    int ch,n,i,j,ins,del,a,b,c,d,e,flag,val;
    int num,f,choice,g=0,h=0,k=0,l=0,m=0;
    int q=0,o=0,p=0;
    flag=0;
    int arr[10];
    while (true)
    {
        printf("Enter the number of elements in the array (Maximum 10): ");
        scanf("%d",&n);
        if (n<=10)
        {
            for (i=0;i<n;i++)
            {
                printf("Enter element of the index[%d]: ",i);
                scanf("%d", &arr[i]);
            }
            printf("The array is: ");
            for (j=0;j<n;j++)
            {
                printf("%d ",arr[j]);
            }
            while(true)
            {
                printf("\n               MENU               \n");
                printf("1: Insertion \n");
                printf("2: Deletion \n");
                printf("3: Searching \n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1: 
                    printf("1: Insertion at the end \n");
                    printf("2: Insertion in the beginning \n");
                    printf("3: Insertion in the middle \n");
                    printf("4: Insertion after a given number \n");
                    printf("Enter your choice: ");
                    scanf("%d",&ins);
                    switch(ins)
                    {
                        case 1:
                        n=n+1;
                        printf("Enter the element to be added in the last index: ");
                        scanf("%d",&a);
                        arr[n-1]=a;
                        printf("\n Updated Array: ");
                        for (i=0;i<n;i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        while(g==0)
                        {
                            printf("\nDo you wish to continue with the program(y/n)? ");
                            scanf(" %c",&w);
                            if (w=='y' || w=='Y')
                            {
                                g=1;
                            }
                            else if (w=='n'|| w=='N')
                            {
                                exit(0);
                            }
                            else
                                printf("Enter a valid option!!!");
                        }
                        break;
                        
                        
                        case 2:
                        printf("Enter the element to be added in the first index: ");
                        scanf("%d",&b);
                        n=n+1;
                        for (i=n-1;i>0;i--)
                        {
                            arr[i]=arr[i-1];
                        }
                        arr[0]=b;
                        printf("\n Updated Array: ");
                        for (i=0;i<n;i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        while(h==0)
                        {
                            printf("\nDo you wish to continue with the program(y/n)? ");
                            scanf(" %c",&w);
                            if (w=='y' || w=='Y')
                                h=1;
                            else if (w=='n'|| w=='N')
                            {
                                exit(0);
                            }
                            else
                                printf("Enter a valid option!!!");
                        }
                        break;
                        
                        case 3:
                        printf("Enter the index in which element is to be added:");
                        scanf("%d",&c);
                        printf("Enter the element to be added in the given index: ");
                        scanf("%d",&d);
                        n=n+1;
                        for(i=n-1;i>c;i--)
                        {
                            arr[i]=arr[i-1];
                        }
                        arr[c]=d;
                        printf("\n Updated Array: ");
                        for (i=0;i<n;i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        while(k==0)
                        {
                            printf("\nDo you wish to continue with the program(y/n)? ");
                            scanf(" %c",&w);
                            if (w=='y' || w=='Y')
                                k=1;
                            else if (w=='n'|| w=='N')
                            {
                                exit(0);
                            }
                            else
                                printf("Enter a valid option!!!");
                        }
                        break;
                            
                        case 4:
                        printf("Enter the element after which value is to be inserted:");
                        scanf("%d",&num);
                        printf("Enter the value to be inserted: ");
                        scanf("%d",&f);
                        n=n+1;
                        for (i=0;i<n;i++)
                        {
                            if (arr[i]==num)
                            {
                                printf("The element is at index %d in the given array\n",i);
                                for (j=n-1;j>i+1;j--)
                                {
                                    arr[j]=arr[j-1];
                                }
                                arr[i+1]=f;
                            }
                        }
                        
                        printf("\n Updated Array: ");
                        for (i=0;i<n;i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        while(l==0)
                        {
                            printf("\nDo you wish to continue with the program(y/n)? ");
                            scanf(" %c",&w);
                            if (w=='y' || w=='Y')
                                l=1;
                            else if (w=='n'|| w=='N')
                            {
                                exit(0);
                            }
                            else
                                printf("Enter a valid option!!!");
                        }
                        break;    
                            
                        default: 
                        printf("Please enter a valid Value!!!");
                        break;
                    }
                    break;
                    case 2:
                    printf("1: Deletion from the end \n");
                    printf("2: Delete from the beginning \n");
                    printf("3: Deletion from the middle  \n");
                    printf("Enter your choice: ");
                    scanf("%d",&del);
                    switch(del)
                    {
                        case 1:
                        n=n-1;
                        printf("\n Updated Array: ");
                        for (i=0;i<n;i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        while(m==0)
                        {
                            printf("\nDo you wish to continue with the program(y/n)? ");
                            scanf(" %c",&w);
                            if (w=='y' || w=='Y')
                                m=1;
                            else if (w=='n'|| w=='N')
                            {
                                exit(0);
                            }
                            else
                                printf("Enter a valid option!!!");
                        }
                        break;
                        
                        case 2:
                        for(i=0;i<n-1;i++)
                        {
                            arr[i]=arr[i+1];
                        }
                        n=n-1;
                        printf("\n Updated Array: ");
                        for (i=0;i<n;i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        while(q==0)
                        {
                            printf("\nDo you wish to continue with the program(y/n)? ");
                            scanf(" %c",&w);
                            if (w=='y' || w=='Y')
                                q=1;
                            else if (w=='n'|| w=='N')
                            {
                                exit(0);
                            }
                            else
                                printf("Enter a valid option!!!");
                        }
                        break;
                        
                        case 3:
                        printf("Enter the index which has to be deleted:");
                        scanf("%d",&e);
                        for(i=e;i<n-1;i++)
                        {
                            arr[i]=arr[i+1];
                        }
                        n=n-1;
                        printf("\n Updated Array: ");
                        for (i=0;i<n;i++)
                        {
                            printf("%d ", arr[i]);
                        }
                        while(o==0)
                        {
                            printf("\nDo you wish to continue with the program(y/n)? ");
                            scanf(" %c",&w);
                            if (w=='y' || w=='Y')
                                o=1;
                            else if (w=='n'|| w=='N')
                            {
                                exit(0);
                            }
                            else
                                printf("Enter a valid option!!!");
                        }
                        break;
                        
                        default: 
                        printf("Please enter a valid Value!!!");
                        break;
                    }
                    break;
                    
                    case 3:
                    printf("Enter the value to be searched: ");
                    scanf("%d",&val);
                    for(i=0;i<n;i++)
                    {
                        if (arr[i]==val)
                        {
                            flag=1;
                            break;
                        }
                    
                    }
                    if (flag==0)
                    {
                        printf("VALUE NOT FOUND!!! \n");
                        
                    }
                    else
                    {
                        printf("VALUE FOUND!!!\n");
                        printf("%d is at index %d",val,i);
                    }
                    while(p==0)
                    {
                        printf("\nDo you wish to continue with the program(y/n)? ");
                        scanf(" %c",&w);
                        if (w=='y' || w=='Y')
                            p=1;
                        else if (w=='n'|| w=='N')
                        {
                            exit(0);
                        }
                        else
                            printf("Enter a valid option!!!");
                    }
                    break;
                        
                        
                    default: 
                    printf("Please enter a valid Value!!!");
                    break;
                }
            }
        }
        else
        {
            printf("Enter a valid Input!!!\n");
        }
    }
    return 0;
}