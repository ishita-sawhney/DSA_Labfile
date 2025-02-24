#include <stdio.h>
#include <stdbool.h>
int main()
{
    int ch,m,n,i,j,c,r,a=0,b=0,k,mul=0,flag=0,tran=0;
    int A[10][10],B[10][10],C[10][10],trans[10][10],p[10][10];
    while (a==0)
    {
        printf("             MENU             \n");
        printf("1. ADDITION OF MATRICES\n");
        printf("2. SUBTRACTION OF MATRICES\n");
        printf("3. MULTIPLICATION OF MATRICES\n");
        printf("4. TRANSPOSE OF A MATRIX\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            while(flag==0)
            {
                printf("Enter the order of 1st Matrix: ");
                scanf("%d %d",&m, &n);
                printf("Enter the order of 2nd Matrix: ");
                scanf("%d %d",&r, &c);
                if (m==r && n==c)
                {
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            printf("Enter the element in the index A[%d][%d]:",i,j);
                            scanf("%d",&A[i][j]);
                        }
                    }
                    printf("Matrix A is:\n");
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            printf("%d\t",A[i][j]);
                        }
                        printf("\n");
                    }
                    for(i=0;i<r;i++)
                    {
                        for(j=0;j<c;j++)
                        {
                            printf("Enter the element in the index B[%d][%d]: ",i,j);
                            scanf("%d",&B[i][j]);
                        }
                    }
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            C[i][j]=A[i][j]+B[i][j];
                        }
                    }
                    flag=1;
                }
                else
                {
                    printf("NUMBER OF ROWS AND COLUMNS IN 1st AND 2nd MATRIX SHOULD BE EQUAl!!!\n");
                }
            }
            
            printf("Matrix B is: \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",B[i][j]);
                }
                printf("\n");
            }
            printf("Sum of Matrix A and B is: \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",C[i][j]);
                }
                printf("\n");
            }
            break;
            
            case 2:
            while(b==0)
            {
                printf("Enter the order of 1st Matrix: ");
                scanf("%d %d",&m, &n);
                printf("Enter the order of 2nd Matrix: ");
                scanf("%d %d",&r, &c);
                if (m==r && n==c)
                {
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            printf("Enter the element in the index A[%d][%d]:",i,j);
                            scanf("%d",&A[i][j]);
                        }
                    }
                    printf("Matrix A is:\n");
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            printf("%d\t",A[i][j]);
                        }
                        printf("\n");
                    }
                    for(i=0;i<r;i++)
                    {
                        for(j=0;j<c;j++)
                        {
                            printf("Enter the element in the index B[%d][%d]: ",i,j);
                            scanf("%d",&B[i][j]);
                        }
                    }
                    for(i=0;i<m;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            C[i][j]=A[i][j]-B[i][j];
                        }
                    }
                    b=1;
                }
                else
                {
                    printf("NUMBER OF ROWS AND COLUMNS IN 1st AND 2nd MATRIX SHOULD BE EQUAl!!!\n");
                }
            }
            
            printf("Matrix B is: \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",B[i][j]);
                }
                printf("\n");
            }
            printf("Difference of Matrix A and B is: \n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    printf("%d \t",C[i][j]);
                }
                printf("\n");
            }
            break;
            
            case 3:
            while(mul==0)
            {
                printf("Enter the order of the matrix A: ");
                scanf("%d %d",&m,&n);
                printf("Enter the order of the matrix B: ");
                scanf("%d %d",&r,&c);
                if (n==r)
                {
                    for(i=0;i<m; i++)
                    {
                        for( j=0;j<n ; j++)
                        {
                            printf("Enter the elements in the matrix A[%d][%d]: ",i,j);
                            scanf("%d",&A[i][j]);
                        }
                    }
                    for(i=0; i<r; i++)
                    {
                        for( j=0;j<c; j++)
                        {
                            printf("Enter the elements in the matrix B[%d][%d]: ",i,j);
                            scanf("%d",&B[i][j]);
                        }
                    }
                    for(i=0; i<m; i++)
                    {
                        for( j=0;j<c ; j++)
                        {
                            p[i][j]=0;
                            for(k=0;k<r;k++)
                            {
                                p[i][j]=p[i][j]+A[i][k]*B[k][j];
                            }
                        }
                    }
                    printf("Matrix A: \n");
                    for(i=0; i<m; i++)
                    {
                        for( j=0;j<n ; j++)
                        {
                            printf("%d \t",A[i][j]);
                        }
                        printf("\n");
                    }
                    printf("Matrix B: \n");
                    for(i=0; i<r; i++)
                    {
                        for( j=0;j<c ; j++)
                        {
                            printf("%d \t",B[i][j]);
                        }
                        printf("\n");
                    }
                    printf("Product Matrix of Matrix A and B: \n");
                    for(i=0; i<m; i++)
                    {
                        for( j=0;j<c;j++)
                        {
                            printf("%d \t",p[i][j]);
                        }
                        printf("\n");
                    }
                    mul=1;
                }
                else
                {
                    printf("Columns of the first matrix should be equal to the rows of the second matrix!!!!\n");
                }
            }
            break;
            
            case 4:
            while (tran==0)
            {
                printf("Enter the order of the matrix:");
                scanf("%d %d",&m,&n);
                if (m==n)
                {
                    for(i=0;i<n;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            printf("Enter the element in a[%d][%d]:",i,j);
                            scanf("%d", &A[i][j]);
                        }
                    }
                    printf("The given matrix is: \n");
                    for(i=0;i<n;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            printf("%d  \t",A[i][j]);
                        }
                        printf("\n");
                    }
                    printf("Transpose of the given matrix is: \n");
                    for(i=0;i<n;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            trans[j][i]=A[i][j];
                        }
                    }
                    for(i=0;i<n;i++)
                    {
                        for(j=0;j<n;j++)
                        {
                            printf("%d  \t",trans[i][j]);
                        }
                        printf("\n");
                    }
                    tran=1;
                }
                else
                {
                    printf("Number of Columns and rows of a matrix should be equal to find its transpose!!!\n");
                }
            }    
            break;
            
            case 5:
            a=1;
            break;
            
            default:
            printf("Please enter a valid Value!!!\n");
            break;
        }
    }    
    return 0;
}
