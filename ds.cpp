//printing the sum of values in even index
 
#include<iostream>
using namespace std;
void arraytraverse(int[],int,int,int);
void evensum(int[],int,int,int);

int main()
{
int a[5];
cout<<"enter the element of array-"<<endl;
for(int i=0;i<=4;i++)
{
	cin>>a[i];
}

arraytraverse(a,0,4,5);
evensum(a,0,4,5);
}

void arraytraverse(int a[],int lb,int ub,int max)
{
	if(ub>max){
		cout<<"Error";
	}
	for(int i=lb;i<=ub;i++)
	{cout<<"\t"<<a[i];
	}
}

void evensum(int a[],int lb,int ub,int max){
int sum=0;
for(int i=lb;i<=ub;i++){
	if(i%2==0){
		sum=sum+a[i];
}
	}
	cout<<endl<<"Even Sum="<<sum<<endl;
} 
