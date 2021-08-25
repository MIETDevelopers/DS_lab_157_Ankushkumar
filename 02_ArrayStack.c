//Name :Ankush kumar
//Roll No:2020A1R157
//Program to insert ,delete and search in array using stack
#include<stdio.h>//Preprocessor directive to include standard output or input header file
int stack[100],choice,n,top,x,i;// create stack and creat variable
void push(void);
void pop(void);
void display(void);
int main()
{

    top=-1;//it show stack is empty
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()//push function for insert the number
{
    if(top>=n-1)//if top is greater equal to n-1
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;//the x is assigned to stack[top]
    }
}
void pop()//pop function for delete number
{
    if(top<=-1)//if top is less equal to -1
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()//display all the number in stack
{
    if(top>=0)//if top greater then equal 0 then print
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}