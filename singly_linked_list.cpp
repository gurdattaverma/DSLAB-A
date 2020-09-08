#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

class sll
{
   
public:
    node *head, *tail;
    sll(){
    head = NULL;
    tail = NULL;
    }
   
    void add_element(int n);
    void display();
};
void sll::add_element(int n){
  
    node *temp = new node;
    temp->data = n;
    temp->next = NULL;

    if(head==NULL){
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
}
void sll::display(){
    node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;

    }
    }    

int main(){
    sll ins;
    ins.add_element(5);
    ins.add_element(8);
    ins.add_element(4);
    ins.add_element(9);
    ins.add_element(10);
    ins.display();
    return 0;
}

