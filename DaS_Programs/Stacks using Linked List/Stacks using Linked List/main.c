#include<stdio.h>
#include<stdlib.h>

struct node
{
       int data;
       struct node *next;
};
struct node * START=NULL;
void push(void);
void pop(void);
void peek(void);
void display(void);
int main()
{
       int op;
       do
           {
         printf("\n-----MENU-----");
         printf("\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT");
         printf("\nEnter Your Choice : ");
         scanf("%d",&op);
         switch(op)
         {
               case 1:
                  push();
               break;
               case 2:
                  pop();
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
       }while(op!=5);
}
void push()
{
        int val;
        struct node *new_node;
        printf("\nEnter The Data Which You Want To Insert At Top Of Stack : ");
        scanf("%d",&val);
        new_node=(struct node *)malloc(sizeof(struct node));
        new_node->data=val;
            if(START==NULL)
        {
                   START=new_node;
               new_node->next=NULL;
        }
        else
        {
            new_node->next=START;
        START=new_node;
        }
}
void pop()
{
      int val;
      struct node *ptr;
      if(START==NULL)
      {
             printf("Stack Underflow . ");
      }
      else
      {
          ptr=START;
          START=ptr->next;
          val=ptr->data;
          printf("\nThe Element Deleted From The Top Of Stack Is %d . ",val);
          free(ptr);
      }
}
void peek()
{
       int val;
           if(START==NULL)
       {
              printf("Stack Underflow . ");
       }
       else
       {
           val=START->data;
           printf("\nThe Element At The Top Of Link List Is %d . ",val);
       }
}
void display()
{
          struct node *ptr;
              if(START==NULL)
          {
                 printf("Stack Underflow . ");
          }
          else
          {
              ptr=START;
          do
          {
            printf("%d ",ptr->data);
            ptr=ptr->next;
          }while(ptr!=NULL);
          }
}
