#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_middle(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_middle(struct node *);

int main()
{
    int ch;
    int b=0;
    int option;
    while(b==0)
    {
        printf("\n               MENU               \n");
        printf("1: CREATE A LIST \n");
        printf("2: DISPLAY LIST \n");
        printf("3: INSERT A NODE \n");
        printf("4: DELETE A NODE \n");
        printf("5: EXIT \n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
            start=create(start);
            printf("\n LINKED LIST CREATED");
            break;
            
            case 2:
            start=display(start);
            break;
            
            case 3:
            printf("1: INSERTION IN THE START \n");
            printf("2: INSERTION IN THE END \n");
            printf("3: INSERTION IN THE MIDDLE \n");
            printf("Enter your choice: ");
            scanf("%d",&option);
            switch(option)
            {
                case 1:
                start=insert_beg(start);
                break;
                
                case 2:
                start=insert_end(start);
                break;
                
                case 3:
                start=insert_middle(start);
                break;
            }
            break;
            
            case 4:
            printf("1: DELETION IN THE START \n");
            printf("2: DELETION IN THE END \n");
            printf("3: DELETION IN THE MIDDLE \n");
            printf("Enter your choice: ");
            scanf("%d",&option);
            switch(option)
            {
                case 1:
                start=delete_beg(start);
                break;
                
                case 2:
                start=delete_end(start);
                break;
                
                case 3:
                start=delete_middle(start);
                break;
            }
            break;
            
            case 5: 
            {
                b=1;
                break;
            }
                    
            default: 
            printf("Please enter a valid Value!!!");
            break;
        }
    }
    return 0;
}


struct node *create(struct node *start)
{
    struct node *new_node, *ptr;
    int num,i,j;
    printf("Enter the number of elements in the list: ");
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        printf("Enter the data at position %d: ",j+1);
        scanf("%d",&num);
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node -> data=num;
        if(start==NULL)
        {
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next = new_node;
            new_node->next=NULL;
        }
    }
    
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr != NULL)
    {
        printf("\t %d", ptr -> data);
        ptr = ptr -> next;
    }
    return start;
}

struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *ptr, *new_node;
    int num;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = NULL;
    ptr = start;
    while(ptr -> next != NULL)
    ptr = ptr -> next;
    ptr -> next = new_node;
    return start;
}

struct node *insert_middle(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\n Enter the data : ");
    scanf("%d", &num);
    printf("\n Enter the value after which the data has to be inserted : ");
    scanf("%d", &val);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node -> data = num;
    ptr = start;
    preptr = ptr;
    while(preptr -> data != val)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next=new_node;
    new_node -> next = ptr;
    return start;
}

struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    start = start -> next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr, *temp;
    ptr =temp=start;
    while(ptr -> next != NULL)
    {
        temp=ptr;
        ptr = ptr -> next;
    }
    temp -> next = NULL;
    free(ptr);
    return start;
}

struct node *delete_middle(struct node *start)
{
    struct node *ptr, *temp;
    int val;
    printf("\n Enter the value of the node which has to be deleted : ");
    scanf("%d", &val);
    ptr = temp=start;
    if(ptr -> data == val)
    {
        start = delete_beg(start);
        return start;
    }
    else
    {
        while(ptr -> data != val)
        {
            temp = ptr;
            ptr = ptr -> next;
        }
        temp -> next = ptr -> next;
        free(ptr);
    }    
    return start;
}
