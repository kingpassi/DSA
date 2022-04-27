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

void deletion(node*&head, int n){
    node*temp=head;
    while(temp->next->data!=n){
        temp=temp->next;
    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
    
    delete todelete;
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
          
    deletion(head,3);
    display(head);
    
}

