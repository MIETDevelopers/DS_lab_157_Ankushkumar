//Name :Ankush kumar
//Roll No:2020A1R157
//Program to check expression is correctly parenthesized
#include<stdio.h>//preprocessor directive to include standard output or input header file
#include<stdlib.h>//preprocessor directive to include standard libarary header file
int top=-1;//stack is empty
char stack[100],a;//create stack of 100
void push()//insert function add number in stack
{
    stack[top]=a;
    top++;
 
}
void pop()//delete function delete number from stack
{
    if(top==-1)//if top is equal to-1 experssion is invaild
    {
        printf("expression is invalid\n");
        exit(0);
    }
 
  else
    {
        top--;
    }
}int main()//main function
{
    int i, ch;//create variable i and ch
    char a[100];
    printf("1 check expression correctly parenthesized\n 2.Exit\n");
    while (1)
    {
        printf("choose operation==>");
        scanf("%d",&ch);
        switch(ch)//start switch function
        {
            case 1:
                printf("Enter experssion==>\n");
                scanf("%s",&a);
                for(i=0;a[i]!='\0';i++)
                {
                    if(a[i] == '(')
                    {
                        push(a[i]);
                    }
                   else if (a[i]==')')
                   {
                       pop();
                   }
                 
                }
                if(top == -1)//if top is equal to -1 is experssion
                    printf("Expression is valid\n");
                else
                    
                  printf("Expression is invalid\n");
                break;
                
               case 2:
                 exit(0);
 
              default:printf("invalid operation==>");
        }
    }
    return 0;//return statement
}

