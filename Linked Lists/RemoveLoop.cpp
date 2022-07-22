/// Detect and remove loop in a linked list.
/// if you make a cycle at node 2, and then delete the 2nd node, it will crash like a malaysian plane.
#include <iostream>
#include <bits/stdc++.h>
#include "usingClass.cpp"
using namespace std;

bool hasLoop(LinkedList *l){
    
    Node *rabbit = l->head; //// not l->head, coz i am not passing a pointer to the LL as arg. I am passing the entire fkn LL.
    Node *tort = l->head;

    while(rabbit&&rabbit->next){
        tort=tort->next;
        rabbit = rabbit->next->next;

        if(rabbit==tort) return true;
    }

    return false;
}

void removeLoop(LinkedList *l){

    if(hasLoop(l)){


    }

    cout<<"LMAO, you got no loop only"<<endl;
}

int main(){
    LinkedList *l1 = new LinkedList();
    l1->insertNode(4);
    l1->insertNode(5);
    l1->insertNode(6);
    l1->insertNode(7);
    // l1->makeCycleAt(2);
    cout<<hasLoop(l1);
    // l1->printList();
}