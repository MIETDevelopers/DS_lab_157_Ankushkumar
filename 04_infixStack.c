//Name :Ankush kumar
//Roll No:2020A1R157
//Program to find the experssion in infix
#include<stdio.h>//preprocessor directive to include standard output or input header file
#include<stdlib.h>//preprocessor directive to include standard library header file
#include<ctype.h>
#define James 20//define number 20
#define Vilen 20

int top_operand=-1;
int top_operator=-1;
int operand_stack[30];
char operator_stack[20];
void push_operand(int);
void push_operator(char);
float pop_operand();
char pop_operator();
void Display_operand();
void Dispplay_opearotr();
int evaluation();
int i,j;
void main()//main functio start from here
{
	int num;
		char expr[10],Alpha;
		printf("Enter any Expression ");
		scanf("%[^n]s",expr);
		printf("Entered Expression  is = %s\n ",expr);
		for(i=0;expr[i]!='\0';i++)
		{
			Alpha=expr[i];
			if(isdigit(Alpha))
			{
				num=Alpha-'0';
				push_operand(num);
			}
			else
			{
				push_operator(Alpha);
			}
		}
		Display_operand();
		Dispplay_opearotr();
printf("\nexpression after evaluation = %d\n\n",evaluation());
}
void push_operand(int operand)
{
	if(top_operand==James-1)//if top is equal to -1 queue is overflow
	{
		printf("overflow");
	}
	else
	{
		operand_stack[top_operand++]=operand;

	}
	}
	void push_operator(char Alpha )
	{
		if (top_operator==Vilen-1)
		{
			printf("Queue Overflow");
		}
		else
		{
			top_operator=top_operator+1;
			operator_stack[top_operator]=Alpha;
		}
	}
	float pop_operand()
	{
		int operand;
		if(top_operand==-1)
		{
			printf("No Operand in Stack\n");
			exit(0);
		}
		else
		{
			operand=operand_stack[top_operand];
			top_operand--;
		}
		return operand;
	}
	char pop_operator()

	{
		char operator;
		if(top_operator==-1)
		{
			printf("No operator in stack");
			exit(0);
		}
		else
		{
			operator=operator_stack[top_operator];
			top_operator--;
		}
		return operator;
	}
void Display_operand()//display _operand function start
{
if(top_operand==-1)
	{
		printf("No operand in Stack\n");
	}
	else
	{
		printf("Operands in the stack are\n");
		for( i=top_operand;i>-1;i--)
		{
			printf("%d\t",operand_stack[i]);
		}
		printf("\n");
	}	
}
void Dispplay_opearotr()//display operator start
{
	if(top_operator==-1)
	{
		printf("No opertors in the stack\n");

	}
	else
	{
		printf("opearator is the stack");
		for(i=top_operator;i>-1;i--)
		{
			printf("%c\t",operator_stack[i]);
		}
		printf("\n");
	}
}
int evaluation()//evalution function start
{
	int operand_1,operand_2,result;
	char operator;
	if(top_operand==-1)
	{
		printf("NO more Operator in stack");
		exit(0);
	}
	else
	{
		for(i=top_operator;top_operator >-1;i++)
		{
			operator=pop_operator();
			operand_1=pop_operand();
			operand_2=pop_operand();
			if(operator=='+')//operator additon
			{
				result=operand_1+operand_2;
			}
			else if(operator=='-')//operator subtration
			{
				result=operand_1-operand_2;
			}
			else if(operator=='*')//operator multiplication
			{
				result=operand_1*operand_2;
			}
			else if(operator=='/')//operator divison
			{
				result=operand_2/operand_1;
			}
			else
			{

				printf("Undefined Operator");
			}
		}
		push_operand(result);
	}
	return operand_stack[0];//return operand stack
}
