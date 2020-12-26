#include<stdio.h>
#include<conio.h>
#define M 5
int cq[M],f=-1,r=-1;
void ins(int val)
{
	if((f==0&&r==M-1)||(r==f-1))
		printf("\n Overflow!!");
	else
	{
		if(f==-1&&r==-1)
		{
			f=0;
			r=0;
		}
		else if(r==M-1&&f!=0)
			r=0;
		else
			r++;
		cq[r]=val;
	}
}
int del()
{
	if(f==-1&&r==-1)
	{
		printf("Underflow!");
		return -1;
	}
	else
	{
		int v;
		if(f==r)
		{       v=cq[f];
			f=-1;
			r=-1;
		}
		else
		{
			v=cq[f];
			f++;
		}
		return v;
	}
}
void disp()
{       int d=f;
	if(f==-1)
	printf("No elements in queue!");
	else
	{
	printf("Queue:\n");
	while(1)
	{
		printf("%d\t",cq[d]);
		if(d==M-1&&d!=r)
			d=0;
		else if(d==r)
		break;
		else
		d++;
	}}
}

void main()
{
	int i,opt,ch,in,de;
	do
	{       clrscr();
		printf("MENU\n1.Insert \n2.Delete \n3.Display");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter element to be inserted:");
				scanf("%d",&in);
				ins(in);
				disp();
				break;
			case 2: de=del();
				if(de==-1)
				break;
				else
				printf("\nDeleted element is:%d",de);
				disp();
				break;
			case 3: disp();
				break;
		}
		printf("\nDo you want to continue?1/0");
		scanf("%d",&opt);
	}while(opt==1);
	getch();
}


