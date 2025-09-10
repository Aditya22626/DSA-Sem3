#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    int n;
    cin>>n;
    if(n<=0){
        cout<<"Linked List Can not be formed ";
    }
    Node* head=NULL;
    Node* temp=NULL;
    for(int i=1;i<=n;i++){
        Node* newNode=new Node();
        cout<<"Enter data for Node "<<i<<" : ";
        cin>>newNode->data;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            temp=head;
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
    }
    temp = head;
    cout<<"Linked List : ";
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}