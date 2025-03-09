#include <stdio.h>
int j=0;
int TOH(int n,char from,char to,char aux)
{
    int i=0;
    while(i<1)
    {
        if(n==1)
        {
            printf("Move disk %d from rod %c to %c\n",n,from,to);
            j++;
            return j;
        }
        else
        {
            TOH(n-1,from,aux,to);
            printf("Move disk %d from rod %c to %c\n",n,from,to);
            j++;
            TOH(n-1,aux,to,from);
        }
        i++;
    }
    return j;
}

int main()
{
    int N,step;
    printf("Enter number of disks: ");
    scanf("%d",&N);
    step=TOH(N,'A','B','C');
    printf("No. of steps are: %d",step);
    return 0;
}
