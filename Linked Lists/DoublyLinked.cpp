#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *next;
    Node *prev;
    int data;
    Node(int x=0){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

class DLinkedList{

    Node* head;
    

    public:
    int count;
    DLinkedList(int data){
        Node* firstNode = new Node(data);
        head=firstNode;
        count=1;
    }

    void insertNodeAt(int,int); /// insert a node at a particular location.
    void deleteNode(int); /// delete a node at a particular location. 
    void printList(); /// print the list lmao.
};

void DLinkedList::insertNodeAt(int data,int pos){

    Node *newNode = new Node(data);
    if(!head){
        head=newNode;
    } else {
        Node *p=head,*q=NULL;
        if(pos==1){
            newNode->next=this->head;
            (this->head)->prev=newNode;
            this->head=newNode;
        } else {
            // if(this->count+1>pos) return;
            while(pos-->1){
                // cout<<p->data<<endl;
                q=p;
                p=p->next;
            }
            newNode->next=p;
            newNode->prev=q;
            q->next=newNode;
        }
    }
    this->count++;
}

void DLinkedList::printList(){
    Node *p=head;
    while(p){
        cout<<p->data<<endl;
        p=p->next;
    }
}

void DLinkedList::deleteNode(int pos){
    // if(pos>this->count) return;
    Node *p=head,*q=NULL,*r=NULL;
    
    while(pos--){
        r=q;
        q=p;
        p=p->next;
    } //// first take positions, then perform action
    r->next=p;
    cout<<p->data<<endl;
    if(pos==this->count){
        r->next=NULL;
    } else {
        p->prev=r;
        delete q;
    }
    
}
  

int main(){
    DLinkedList *d1 = new DLinkedList(1); ///this gets pushed to the end.
    // d1->insertNodeAt(10,1); 
    d1->insertNodeAt(20,2);
    d1->insertNodeAt(3,3);
    d1->insertNodeAt(4,4);
    d1->deleteNode(4);
    d1->printList();
}