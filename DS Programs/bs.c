#include<stdio.h>
void main()
{
	int a[10],e,p=0,n,i,j,l,h,m;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("Enter elements in array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	l=0;
	h=n-1;
	printf("\nEnter element to be searched:");
	scanf("%d",&e);
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]==e)
		{
			printf("Element found at position:%d",m+1);
			break;
		}
		else if(a[m]>e)
			h=m;
		else
		l=m;
	}
	if(l>h)
	printf("Element not found!");
}

OUTPUT:
Enter the number of elements in the array:6
Enter elements in array:1
3
5
7
9
11

Enter element to be searched:5
Element found at position:3
