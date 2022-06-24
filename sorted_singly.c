#include <stdio.h>
#define NULL 0

typedef struct nodetype
{
    int info;
   struct nodetype *link;
}node;

int main()
{
    /*declaring function used in this program*/
    node* create();
    void traverse(node*);
    void instsort(node**,int);
    node *head,*ptr;
    int item;
    head=create();
    printf("Linked list before insertion\n");
    traverse(head);
    printf("Enter info to be inserted into new node:");
    scanf("%d",&item);
    instsort(&head,item);
    printf("Linked list after insertion\n");
    traverse(head);
    printf("\n----End of program----\n");
    /*destroying linked list */
    ptr=head;
    while (ptr != NULL)
    {
        ptr = ptr->link;
        free(head);
        head = ptr;
    }
     return 0;
}
/*Following function create a linked list .be sure to enter info in ascending order so that list is sorted*/
node* create()
{
    node *ptr,*head=NULL;
    char ch='y';
    int data;
    while (ch=='y'|| ch=='Y')
    {
        if(head==NULL){
            /*Dynamically allocate space for new node*/
            head=(node*)malloc(sizeof(node));
            ptr=head;
        }
        else
        {
            ptr->link=(node*)malloc(sizeof(node));
            ptr=ptr->link;
        }
        printf("Enter info of new node:\t");
        scanf("%d",&data);
        ptr->info=data;
        fflush(stdin);
        printf("Want to continue : (y or N)=\n");
        scanf("%c",&ch);
    }
    ptr->link=NULL;
    return (head);
}
void traverse(node *head)
{
    node* ptr=head;
    while(ptr != NULL){
    printf("\n Info of node is :\t%d",ptr->info);
    ptr=ptr->link;
    }
    return;
}
/* The following function insert iteminto sortedlinked list bsed on the value of item*/
void instsort(node** head,int item)
{
    node *new, *ptr, *prevptr;
    new=(node*)malloc(sizeof(node));
    new->info=item;
    new->link=NULL;
    if(*head==NULL);
    {
        *head=new;
        return;
    }
    ptr=*head;
    prevptr=NULL;
    while((ptr != NULL)&&(item>ptr->info))
    {
        prevptr=ptr;
        ptr=ptr->link;
    }
    if(prevptr==NULL)
    {
        new->link=*head;
        *head=new;
    }
    else{
        new->link=ptr;
        prevptr->link=new;
    }
}