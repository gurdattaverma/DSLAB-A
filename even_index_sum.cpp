#include<iostream>

using namespace std;

void arraytraverse(int,int,int[],int);
void addevenindex(int,int,int[],int);

int main(){
    int lb,ub,list[10];

    cout<<"Enter the element of array";
    for(int i=0;i<=9;i++){
        cin>>list[i];
    }
    cout<<"Enter lb and ub";
    cin>>lb>>ub;

    addevenindex(lb,ub,list,10);

}

void addevenindex(int lb,int ub,int list[],int max){

    arraytraverse(lb,ub,list,max);
   

    if(ub>=max){
		cout<<"error";
		return;
	}
	if(lb>ub){
		cout<<"error";
		return;
	}
     int sum=0;
     
    for(int i=lb;i<=ub;i++ ){
        if(i%2==0){
            sum=sum+list[i];
        }else{
            exit;
        }
        list[i]=list[i+1];
         
    }

    cout<<endl;
    cout<<" "<<"sum of even index"<<" "<<sum;
    

}

void arraytraverse(int lb,int ub,int list[],int max){
	if(ub>max){
		cout<<"Error";
		return;
	}
	if(lb>ub){
		cout<<"Error";
		return;
	}
	for(int i=lb;i<=ub;i++){
		cout<<"\t"<<list[i];
	}
}
