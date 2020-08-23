#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX],top=-1;
void push(int);
int pop(int);
int peek(int);
void display();

int main()
{
    int ch;
    int val;
    clrscr();
    while(1)
    {
        printf("\t\t*****MENU*****\t\t");
        printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        
        switch (ch)
        {
            case 1:printf("\nEnter the element value: ");
		           scanf("%d",&val);
		           push(val);
		           break;
                
            case 2:
                pop(top);
                break;
                
            case 3:
                peek(top);
                break;
                
            case 4:
                display();
                break;
                
            case 5: exit(0);

	        default:
		            printf("\nYou entered invalid choice!\n");
		            break;
        }
    }
}

void push(int val)
{
    if (top==MAX-1)
    {
        printf("\nStack Overflow!");
    }
    else
    {    
        top++;
        stack[top]=val;
    }
}

int pop()
{
    if (top==-1)
    {
       printf("\nStack Empty");
    }
    else
    {
       top--;
	   printf("\nThe last element deleted is: %d",stack[top+1]);
    }
     return top;
}

int peek()
{
    if (top==-1)
    {
       printf("\nStack Empty");
    }
    else
    {
        printf("\nThe element on top of stack is: %d",stack[top]);
    }
    return top;
}

void display()
{
    if (top==-1)
    {
        printf("Stack Empty");
    }
    else
    {
        int i;
        for (i=top; i>=0; i--)
        {
            printf("%d\n",stack[i]); 
        }
    }
}
