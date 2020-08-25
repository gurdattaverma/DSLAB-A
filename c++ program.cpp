#include<iostream>
using namespace std;
 
 void arraytraverse(int[],int,int,int);
 void sumeven(int[],int,int,int);
 
 int main()
 {
 	int b[5];
 	cout<<"enter the elements of array"<<endl;
 	for(int i=0;i<=4;i++)
 	{
 		cin>>b[i]; 		
	 }
	 
	arraytraverse(b,0,4,5);
	sumeven(b,0,4,5);
}
	  void arraytraverse(int b[],int lb,int ub,int max)
	  {
	  	if(ub>max)
	  	{
	  		cout<<"error";
		  }
		  for(int i=lb;i<=ub;i++)
		  {
		    cout<<"\t"<<b[i];
		  }
	  }
	  void sumeven(int b[],int lb,int ub,int max)
	  {
	  	int sum=0;
	  	for(int i=lb;i<=ub;i++)
	  	{
	  		if(i%2==0)
	  		{
	  			sum=sum + b[i];
			  }
		  }
	  cout<<endl<<"Even sum="<<sum<<endl;
 }
