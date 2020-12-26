#include<stdio.h>
void main()
{
	int a[10],b[10],n,m,c[20],i=0,j=0,k=0;
	printf("Enter number of elements in array 1 & 2:");
	scanf("%d%d",&n,&m);
	printf("Enter array 1:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter array 2:");
	for(j=0;j<m;j++)
		scanf("%d",&b[j]);
	i=0;
	j=0;
	while((i<n)&&(j<m))
	{
		if(a[i]<=b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	if((i==n)&&(j!=m))
	{
		for(;j<m;j++,k++)
		c[k]=b[j];
	}
	else if((j==m)&&(i!=n))
	{
		for(;i<n;i++,k++)
		c[k]=a[i];
	}
	printf("Sorted array is:");
	for(k=0;k<(n+m);k++)
		printf("\t%d",c[k]);
}

OUTPUT:
Enter number of elements in array 1 & 2:4
5
Enter array 1:1
3
5
7
Enter array 2:0
2
4
6
8
Sorted array is:	0	1	2	3	4	5	6	7	8
