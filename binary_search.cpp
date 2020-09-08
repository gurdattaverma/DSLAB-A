#include<iostream>
using namespace std;
int main(){
    int mid,lb,ub,list[10],item;
    cout<<"Enter elements of array";
    for(int i=0;i<=5;i++){
        cin>>list[i];
    }
    cout<<"Enter lb";
    cin>>lb;
    cout<<"Enter ub";
    cin>>ub;
    cout<<"Enter search item";
    cin>>item;

    while(lb<=ub){

    mid=(lb+(ub-lb)/2);
    if(item>list[mid]){
        lb=lb+1;
    
    }
     else if(item==list[mid]){
        cout<<"Item found @"<<mid;
        break;
    }
    else{
        lb=lb-1;
    }
   
    }
   
    return 0;
}