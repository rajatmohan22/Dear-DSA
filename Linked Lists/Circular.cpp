#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data=0){
        this->data=data;
        this->next=NULL; 
    }

};

class List{
    public:
    Node *head;
    List() {head=NULL;}
    void insertNode(int,int);
    void deleteNode(int);
    void printList();

};

void List::insertNode(int data, int pos){
    Node *newNode = new Node(data);
    if(head==NULL){
        head=newNode;
        newNode->next=newNode;
    } else{
        Node *p = head;
        while(p->next!=head) p=p->next;
        p->next=newNode;
        newNode->next=head;
    }
}

void List::printList(){

    Node *p=head;

    do{
        cout<<p->data<<endl;
        p=p->next;
    }while(p!=head);
}

void List::deleteNode(int pos){

    

}


int main(){
    List *l1 = new List();
    l1->insertNode(3,3);
    l1->insertNode(4,4);
    l1->printList();
}