#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX],top=-1;
int push(int);
int pop(int);
int peek(int);
int display(int);

int main()
{
    int ch;
    
    do
    {
        printf("\t\t*****MENU*****\t\t");
        printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        
        switch (ch)
        {
            case 1:
                push(top);
                break;
                
            case 2:
                pop(top);
                break;
                
            case 3:
                peek(top);
                break;
                
            case 4:
                display(top);
                break;
                
            default:
                printf("BYE!\n");
                break;
        }
    } while (ch<=4);
    
    return 0;
}

int push(int top)
{
    if (top==MAX-1)
    {
        printf("Stack Overflow!");
    }
    else
    {
        int val;
        printf("Enter the element value: ");
        scanf("%d",&val);
        
        top++;
        stack[top]=val;
    }
    return top;
}

int pop(int top)
{
    if (top==-1)
    {
        printf("Stack Empty");
    }
    else
    {
        int temp;
        temp=stack[top];
        printf("The last element deleted is: %d",temp);
        top--;
    }
     return top;
}

int peek(int top)
{
    if (top==-1)
    {
        printf("Stack Empty");
    }
    else
    {
        printf("The last element deleted is: %d",stack[top]);
    }
    return top;
}

int display(int top)
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
            printf("%d\n",stack[top]);
        }
    }
    return top;
}
