#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }

};

void insertAtEnd(Node* &head, int val){
    Node* node = new Node(val);

    if(head == NULL){
        head = node;
        head->next = head;
        return;
    }

    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = node;
    node->next = head;
}

void insertAtBeg(Node* &head, int val){

}

//insert at nth
//del at end
void delAtBeg(Node* &head){
    if(head == NULL) return;

    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    Node* temp2 = head;

    while(temp2->next != head){
        temp2=temp2->next;
    }
    temp2->next = head ->next;
    head = head->next;
    delete temp; 
}

int main()
{
 
}