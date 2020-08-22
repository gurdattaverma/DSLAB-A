//Printing sum of values in even index

#include<iostream>
using namespace std;

//declaring functions
void arraytraverse(int[],int,int,int); 
void evensum(int[],int,int,int);


int main(){
	int a[5];
	cout<<"Enter the elements of array-"<<endl;//taking elements of array by user
	for(int i=0;i<=4;i++)
	{cin>>a[i];
	}
	//calling functions
	 arraytraverse(a,0,4,5);//putting values in the parameters 
	
	 evensum(a,0,4,5);
	 
}
//arraytraversing fucntion
void arraytraverse(int a[],int lb,int ub,int max){
	if(ub>max){
		cout<<"Error";
	}
	for(int i=lb;i<=ub;i++)
	{cout<<"\t"<<a[i];
}

}
//fucntion to calculate sum of values in even index
void evensum(int a[],int lb,int ub,int max){
	int sum=0;
	for(int i=lb;i<=ub;i++){
		if(i%2==0){ //checking whether the index is even
			sum=sum+a[i];//sum of the value in above index
		}
    }
		cout<<endl<<"Even Sum= "<<sum<<endl;
			
}


