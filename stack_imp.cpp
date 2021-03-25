#include<iostream>
using namespace std;
int arr[10];
class stack{
    public:
    int top = -1;
    void push(int n){
        top++;
        arr[top] = n;
       
    }
    void pop(){
            top--;

    }
    void display(){
        for(int i=top;i>=0;i--)
        cout<<arr[i]<<" ";
    }
  
};

int main(){
    stack obj;
    obj.push(5);
    obj.push(5);
    obj.push(6);
    obj.pop(); 
    obj.display();
    return 0;
}

