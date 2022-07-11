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
        Node* head=NULL;

        public:
        LinkedList(){head=NULL;}

        void insertNode(int);
        int ListLen();
        void printList();
        int deleteNode(int);
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

}

int LinkedList::ListLen(){
    Node* p=head;
    int count=0;
    while(p){
        p=p->next;
        count++;
    }
    return count;
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
        delete p; /// deallocation of heap memeory.
    } else{
        while(pos-- >0){
            q=p;
            p=p->next;
        }
        x=p->data;
        q->next=p->next;
        delete p; /// deallocation of heap memory.
    }
    
    return x;
}


int main(){
    LinkedList *l1 = new LinkedList();
    l1->insertNode(3);
    l1->insertNode(4);
    l1->deleteNode(2);
    l1->printList();
    cout<<l1->ListLen()<<endl;
}