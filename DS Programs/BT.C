#include<stdio.h>
#include<conio.h>
struct tree
{
	int data;
	struct tree *l,*r;
}*root,*q,*t,*p;
void insert()
{
	int e;
	struct tree *n=(struct tree*)malloc(sizeof(struct tree*));
	printf("Enter data element:");
	scanf("%d",&e);
	n->data=e;
	n->l=NULL;
	n->r=NULL;
	if(root==NULL)
	root=n;
	else
	{
	p=root;
	q=root;
	while(p!=NULL)
	{
		q=p;
		if(p->data>e)
		p=p->l;
		else
		p=p->r;
	}
	if(q->data>e)
	    q->l=n;
	else
		q->r=n;
	}
}
void ino(struct tree *p)
{
	while(p!=NULL)
	{
		ino(p->l);
		printf("%5d",p->data);
		ino(p->r);
	}
}
void preo()
{
	p=root;
	while(p!=NULL)
	{
		printf("%5d",p->data);
		preo(p->l);
		preo(p->r);
	}
}
void posto(struct tree *p)
{
	while(p!=NULL)
	{
		posto(p->l);
		posto(p->r);
		printf("%5d",p->data);
	}
}
void search()
{
	int ele;
	printf("Enter element to be searched:");
	scanf("%d",&ele);
	p=root;
	while(p!=NULL)
	{
		if(p->data==ele)
		{
			printf("Element found!");
			break;
		}
		else
		{
		if(ele>p->data)
			p=p->r;
		else
			p=p->l;
		}
	}
	if(p==NULL)
	printf("Element not foumd!");
}
void main()
{
	int o,ch;
	do
	{
		printf("\nMENU\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Search");
		printf("\nEnter your choice:");
		scanf("%d",&o);
		switch(o)
		{
			case 1:insert();
				break;
			case 2:ino(root);
				break;
			case 3:preo();
				break;
			case 4:posto(root);
				break;
			case 5:search();
				break;
		}
		printf("\n Enter 1 to continue:");
		scanf("%d",&ch);
	}while(ch==1);
	getch();
}

