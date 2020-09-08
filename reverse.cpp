#include<iostream>
#include<conio.h>
using namespace std;
void reversearray(int,int,int[],int);

int main(){
	int lb, ub, list[5];
	cout<<"Enter array element";
	for(int i=0;i<=4;i++){
		cin>>list[i];
	}
	cout<<"Enter lb ";
	cin>>lb;
	cout<<"Enter ub ";
	cin>>ub;
	
	reversearray(lb,ub,list,5);
	
	return 0;
	
}

void reversearray(int lb, int ub,int list[],int max){
	if(lb>ub){
		cout<<"error";
		return;
	}
	if(ub>max){
		cout<<"error";
		return;
	}
	int temp;
	for(int i=lb;i<=ub; ){
		temp=list[i];
		list[i]=list[ub-i];
		list[ub-i]=temp;
		i=i+1;
		if(i==(ub/2)){
			break;
		}
		
		}
		for(int i=lb;i<=ub;i++){
			cout<<"\t"<<list[i];
	}
}
