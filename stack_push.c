#include <stdio.h>  
#define MAXSIZE 5  
   
struct stack  
{  
    int stk[MAXSIZE];  
    int top;  
};  
typedef struct stack STACK;  
STACK s;  
   
void push(void);  
void display(void);  
   
void main ()  
{  
    int choice;  
    s.top = -1;  
    do  
    {  
     push();  
     printf ("Do you want to continue(Type 0 or 1)?\n");  
     scanf ("%d", &choice);  
    }while(choice==1);   
     display();  
}  
  
void push ()  
{  
    int num;  
    if (s.top == (MAXSIZE - 1))  
    {  
        printf ("Stack is Full\n");  
        return;  
    }  
    else  
    {  
        printf ("Enter the element to be pushed\n");  
        scanf ("%d", &num);  
        s.top = s.top + 1;  
        s.stk[s.top] = num;  
    }  
    return;  
}  
  
void display ()  
{  
    int i;  
    if (s.top == -1)  
    {  
        printf ("Stack is empty\n");  
        return;  
    }  
    else  
    {  
        printf ("\n The status of the stack is \n");  
        for (i = s.top; i >= 0; i--)  
        {  
            printf ("%d\n", s.stk[i]);  
        }  
    }  
    printf ("\n");  
}  