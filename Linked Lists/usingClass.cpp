#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node* next;
    int data;

    Node(int data=0){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
        public:
        Node* head=NULL;
        int count;
        LinkedList(){
            head=NULL;
            this->count=0;
        }

        void insertNode(int);
        void insertNodeAt(int,int);
        int ListLen();
        void printList();
        int deleteNode(int);
        void reverseList();
        int findMiddleNode(); /// returns -1 if there are even number of nodes.
        void makeCycleAt(int); /// make a cycle at the kth position.
};

void LinkedList::printList(){ /// can access the private memebers of the class obv.
    Node *p = head;

    while(p){
        cout<<p->data<<endl;
        p=p->next;
    }
}

void LinkedList::insertNode(int data){
    Node* newNode = new Node(data);
    Node *p = head;
    if(head==NULL){
        head=newNode;
    } else {
        while(p->next) p=p->next;
        p->next=newNode;
    }
    newNode->next = NULL;
    this->count+=1;

}

int LinkedList::ListLen(){
    
    return this->count;
}

int LinkedList::deleteNode(int pos){
    Node* p=head,*q=NULL;
    int x=-1;
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return x;
    }
    if(ListLen()<pos){
        cout<<"Index out of range"<<endl;
        return x;
    }
    if(pos==1) {
        head=head->next;
        p->next=NULL;
        x=p->data;
        count--;
        delete p; /// deallocation of heap memeory.
    } else{
        while(pos-- >1){
            q=p;
            p=p->next;
        }
        x=p->data;
        q->next=p->next;
        this->count--;
        delete p; /// deallocation of heap memory.
    }
    
    return x;
}

void LinkedList::reverseList(){
    Node  *p=head,*q=NULL,*r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}

void LinkedList::insertNodeAt(int pos,int data){
    
    Node *p=head,*q=NULL;
    Node *newNode = new Node(data);

    while(pos-- >1){
        q=p;
        p=p->next;
    }
    q->next=newNode;
    newNode->next=p;
    this->count+=1;
    
}

int LinkedList::findMiddleNode(){
    int x;
    if(this->count%2==0) x= -1;
    else{
        Node* p = head;
        int middle = (this->count+1)/2;
        while(middle-->1){ 
            p=p->next;
        }
        x= p->data;
    }

    return x;  
}

void LinkedList::makeCycleAt(int pos){

    Node *p=head,*q=head;
    while(pos-- >1){
        p=p->next;
    } 
    while(q->next) q=q->next;
    q->next=p;
}


// int main(){
//     LinkedList *l1 = new LinkedList();
//     l1->insertNode(3);
//     l1->insertNode(4);
//     l1->insertNode(10);
//     l1->insertNode(30);
//     l1->insertNode(5);
//     l1->insertNode(6);
//     l1->insertNode(2);
//     l1->printList();
//     cout<<l1->findMiddleNode()<<" Is the middle length"<<endl;

// }