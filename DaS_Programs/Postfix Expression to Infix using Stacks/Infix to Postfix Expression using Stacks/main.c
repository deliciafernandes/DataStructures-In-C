#include<stdio.h>
#include<string.h>
char postfix[20],stack[20],element;
int top=-1,len=0,pi=0;
void push(char element);
void pop(void);
char peek(void);
int getpriority(char);

int main()
{
       int i;
       char ch;
    
       char a[20];
       printf("Enter The Expression To Convert It From Infix Type To Postfix Type And Only '(' And ')' Brackets Are Allowed : ");
       scanf("%s",a);
    
       len=(int)strlen(a);
       a[len]=')';
       push('(');
    
       for(i=0;i<=len;i++)
       {
           char c;
                  c=a[i];
                  if(c=='(')
                  {
                    push(c);
                  }
                  else if(c==')')
                  {
                         ch=peek();
                         while(ch!='(')
                         {
                                 pop();
                                 postfix[pi]=ch;
                                 pi++;
                                 ch=peek();
                         }
                         pop();
                  }
                  else if(c=='*'||c=='/'||c=='%'||c=='+'||c=='-')
                  {
                                         ch=peek();
                                         while((ch!='(')&&(getpriority(ch)>=getpriority(c)))
                                         {
                                                                pop();
                                                                postfix[pi]=ch;
                                                                pi++;
                                                                ch=peek();
                                         }
                                         push(c);
                  }
                  else
                  {
                  postfix[pi]=c;
                  pi++;
                  }
       }
       postfix[pi]='\0';
       printf("\n\n%s",postfix);
}

void push(char element)
{
               top++;
               stack[top]=element;
}

void pop()
{
      top--;
}

char peek()
{
       return(stack[top]);
}

int getpriority(char c)
{
               if(c=='/'||c=='*'||c=='%')
               {
                          return 1;
               }
               else if(c=='+'||c=='-')
               {
                           return 0;
               }
}
