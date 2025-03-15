#include <stdio.h>
#include <stdbool.h>

void bubble(int arr[],int n);
void selection(int arr[],int n);
void insertion(int arr[],int n);
int smallest(int arr[],int k,int n); 

int main()
{
    int ch,n,i,j;
    int a=0,b=0;
    int arr[10];
    while (a==0)
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
            while(b==0)
            {
                printf("\n               MENU               \n");
                printf("1: BUBBLE SORT \n");
                printf("2: INSERTION SORT \n");
                printf("3: SELECTION SORT  \n");
                printf("4: EXIT \n");
                printf("Enter your choice: ");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1: 
                    bubble(arr,n);
                    a=1;
                    b=1;
                    break;
                    
                    case 2:
                    insertion(arr,n);
                    a=1;
                    b=1;
                    break;
                    
                    case 3:
                    selection(arr,n);
                    a=1;
                    b=1;
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
            printf("ARRAY CAN TAKE ELEMENTS ONLY UPTO 10\nPLEASE ENTER A VALID A VALUE!!!\n");
        }
    }
    printf("\nThe array sorted in ascending order is :\n");
    for(i=0;i<n;i++)
    printf("%d\t", arr[i]);
    return 0;
}


void bubble(int arr[], int n)
{
    int i,j,temp;
    for (i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertion(int arr[],int n)
{
    int i, j, temp;
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while((temp < arr[j]) && (j>=0))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int smallest(int arr[], int k, int n)
{
    int pos = k, small=arr[k], i;
    for(i=k+1;i<n;i++)
    {
        if(arr[i]< small)
        {
            small = arr[i];
            pos = i;
        }
    }
    return pos;
}

void selection(int arr[],int n)
{
    int k, pos, temp;
    for(k=0;k<n;k++)
    {
        pos = smallest(arr, k, n);
        temp = arr[k];
        arr[k] = arr[pos];
        arr[pos] = temp;
    }
}
