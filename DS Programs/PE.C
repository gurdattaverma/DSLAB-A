#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define m 10
char stack[m];
int top=-1;
void push(char ch)
{
	if(top==m-1)
	{
		printf("Overflow!!");
	}
	else
	{
		top++;
		stack[top]=ch;
	}
}
char pop()
{
	if(top==-1)
	{
		printf("Underflow!!");
		return -1;
	}
	else
	{
		char c=stack[top];
		top--;
		return c;
	}
}
int dop(int op1,int op2,char o)
{       int e;
	if(o=='+')
	e=op1+op2;
	else if(o=='-')
	e=op1-op2;
	else if(o=='*')
	e=op1*op2;
	else if(o=='/')
	e=op1/op2;
	return e;
}

void main()
{
	char s[10],o;
	int a,b,i,l,r,ans;
	clrscr();
	printf("Enter postfix expression:");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(isdigit(s[i]))
			push(s[i]);
		else
		{
			a=pop();
			a=a-'0';
			b=pop();
			b=b-'0';
			r=dop(b,a,s[i]);
			push(r);
		}
	}
	ans=pop();
	ans=ans-'0';
	printf("RESULT::%d",ans);
	getch();
}