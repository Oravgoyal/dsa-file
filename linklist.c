#include<stdio.h>
#define NULL 0
typedef struct nodetype
{
    int info;
    struct nodetype *link;
}node;
main(){
    node*create();
    void traverse(node*);
    int deleteiten(node**, int);
    node *head, *ptr;
    int item;
    head = create();
    printf("Linked list before deletion\n");
    traverse(head);
    printf("Enter info part of node to be deleted\n");
    scanf("%d", &item);
    deleteitem(&head, item);
    printf("Linked list after deletion\n");
    traverse(head);
    printf("\n***End of Program*\n");
    ptr = head;
    while(ptr!=NULL){
        ptr = ptr->link;
        free(head);
        head = ptr;
    }
}
node* create(){
    node *ptr, *head = NULL;
    char ch = 'y';
    int data;
    while (ch == 'y' || ch == 'Y')
    {
        if (head == NULL)
        {
           head=(node*) malloc(sizeof(node));
           ptr = head;
        }
        else{
           ptr->link = (node*) malloc(sizeof(node));
           ptr = ptr->link;
        }
        printf("Enter info of new node: ");
        scanf("%d", &data);
        ptr->info = data;
        fflush(stdin);
        printf("Want to continue: (Y or N) = ");
        scanf("%c", &ch);
        }
        ptr->link = NULL;
        return (head);
}
void traverse(node *head){
    node* ptr = head;
    while (ptr!=NULL)
    {
        printf("\n Info of node is\t:%d", ptr->link);
        ptr = ptr->link;
    }
        return;
}
void deleteitem(node** head, int item){
    node *ptr, *prevloc, *loc;
    if (*head == NULL)
    {
       printf("Underflow");
       return;
    }
    ptr = *head;
    prevloc = NULL;
    while ((ptr!=NULL) && (item!=ptr->info))
    {
        prevloc = ptr;
        ptr = ptr->link;
    }
if (item == ptr->info){
    loc = ptr;
    }
    else{
        printf("Item not found, exit without deletion\n");
    return;
    }
    if (prevloc == NULL)
    {
        *head = (*head)->link;
    }
    else{
        prevloc->link = loc->link;
    }
    free(loc);
}