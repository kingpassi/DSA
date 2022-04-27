#include<iostream>
using namespace std;

class node{
    public:
    
    int data;
    node*next;
    
    node(int val){
        data=val;
        next=NULL;
    }
    
    
};
void createLinkList(node*&head, int val){
    
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=n;
    
}

void display(node*&head){
    node*temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

 bool findCycle(node*&head){
     node*fast=head;
     node*slow=head;
      fast=head;
      slow=head;
     
     while(fast!=NULL && fast->next!=NULL){
         slow=slow->next;
         fast=fast->next->next;
         
         if(fast==slow){
             return true;
         }
         
     }
     return false;
 }



int main(){
    node*head=NULL;
    createLinkList(head,6);
     createLinkList(head,5);
      createLinkList(head,4);
       createLinkList(head,3);
        createLinkList(head,2);
         createLinkList(head,1);
          createLinkList(head,0);
          
          display(head);
    
    cout<<findCycle(head);
    
}

