#include<stdio.h>
#include<stdlib.h>

struct node
{
       int data;
       struct node *next;
};

struct node * START=NULL;
void enqueue(void);
void dequeue(void);
void peek(void);
void display(void);
int main()
{
       int opt;
       do
       {
         printf("\n-----Menu-----");
         printf("\n1.INSERT AN ELEMENT AT REAR\n2.DELETE AN ELEMENT FROM FRONT\n3.PEEK\n4.DISPLAY\n5.EXIT");
         printf("\nEnter Your Choice : ");
         scanf("%d",&opt);
         switch(opt)
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
                 
            case 5:
                exit(0);
            break;
                 
         }
       }while(opt!=5);
}

void enqueue()
{
        struct node *new_node,*ptr;
        int val;
        printf("\nEnter The Value To Insert : ");
        scanf("%d",&val);
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->data=val;
    
        if(START==NULL)
        {
                new_node->next=NULL;
                START=new_node;
        }
        else
        //Insertion from end!
        {
             ptr=START;
             while(ptr->next!=NULL)
             {
                       ptr=ptr->next;
             }
             ptr->next=new_node;
             new_node->next=NULL;
        }
}

void dequeue()
{
        struct node *ptr;
        if(START==NULL)
        {
                printf("\nNo Element To Delete . ");
        }
        else
        //deletion from start
        {
             ptr=START;
             START=ptr->next;
             printf("\nThe Element %d Is Deleted . ",ptr->data);
             free(ptr);
        }
}

void peek()
{
       if(START==NULL)
       {
               printf("\nNo Element To Display The Top . ");
       }
       else
       {
        printf("\nThe Element At The Front Position Is %d . ",START->data);
       }
}

void display()
{
        struct node *ptr;
        if(START==NULL)
        {
                printf("\nNo Element To Display . ");
        }
        else
        {
            ptr=START;
            while(ptr!=NULL)
            {
                    printf("%d\t",ptr->data);
                    ptr=ptr->next;
            }
        }
}
