///This is creation of a linked list wihout making a class
#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{

    int data;
    struct Node* head;
    struct Node* next;
}*head=NULL;

struct Node* createList(struct Node* N,int data){

    head=(struct Node*)malloc(sizeof(struct Node));
    N=(struct Node*)malloc(sizeof(struct Node));
    head=N;
    head->data=data;
    head->next=NULL;
}

void appendList(struct Node *node,int data){
    struct Node* p=head;
    struct Node *New = (struct Node*)malloc(sizeof(struct Node));

    if(head->next==NULL){
        p->next=New;
        New->data=data;
        New->next=NULL;
    } else {
        while(p->next!=NULL) p=p->next;
        p->next=New;
        New->data=data;
        New->next=NULL;
        p=New;
    }
}

int Delete(struct Node* node,int index){
    struct Node* p=head;
    struct Node* q=NULL;

    if(index==0){
        head=head->next;
        p->next=NULL;
        return p->data;

    } else{

        for(int i=0;i<index;i++)
        {
            q=p;
            p=p->next;
        }
        int temp=p->data;
        q->next=p->next;
        return temp;

    }
}

/////1 2->3->4->5
void Reverse(struct Node* node){
    struct Node* r=NULL;
    struct Node* q=NULL;
    struct Node* p=head;

    while(p){
        q=p;
        p=p->next;
        q->next=r;
        r=q;
    }
    head=q;
}


void display(struct Node node){
    struct Node *p=head;
    while(p){
        cout<<p->data<<endl;
        p=p->next;
    }
}


int main(){
    struct Node n1;
    createList(&n1,5);
    appendList(&n1,60);
    appendList(&n1,50);
    appendList(&n1,89);
    appendList(&n1,39);
    appendList(&n1,319);
    appendList(&n1,93);
    appendList(&n1,845);
    Reverse(&n1);
    // cout<<"Deleted Item: "<<Delete(&n1,2)<<endl;

    display(n1);
}