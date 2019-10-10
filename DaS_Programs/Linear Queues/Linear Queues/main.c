#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int queue[MAX], f=-1,r=-1,num;

void enqueue(void);
void dequeue(void);
void peek(void);
void display(void);

int main()
{
    int ch;
    
    do
    {
        printf("Choose:\n1.Insert\n2.Delete\n3.Peek at first element\n4.Display\n");
        scanf("%d",&ch);
       
        switch (ch)
        {
            case 1:
                enqueue();
                break;
                
            case 2:
                dequeue();
                break;
                
            case 3:
                peek();
                break;
                
            case 4:
                display();
                break;
                
            default:
                printf("INVALID\n");
                break;
        }
    } while (ch<=4);
    
    return 0;
}

void enqueue()
{
    if (r==MAX-1)
    {
        printf("STACK OVERFLOW\n");
    }
    else
    {
        printf("Enter the value to insert:\n");
        scanf("%d",&num);
        
        if (f==-1 && r==-1)
        {
            f=r=0;
        }
        else
        {
            r++;
        }
        queue[r]=num;
    }
}

void dequeue()
{
    if ((f==-1 && r==-1) || f>r)
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        int n;
        n=queue[f];
        
        if(f==r)
        {
            f=r=-1;
        }
        else
        {
            f++;
        }
        printf("The deleted value is: %d\n",n);
    }
}

void peek()
{
    if ((f==-1 && r==-1) || f>r)
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        printf("The deleted value is: %d\n",queue[f]);
    }
}

void display()
{
    if ((f==-1 && r==-1) || f>r)
    {
        printf("STACK UNDERFLOW\n");
    }
    else
    {
        int i;
        for (i=f; i<=r; i++)
        {
            printf("%d \t",queue[i]);
        }
        printf("\n");
    }
}

