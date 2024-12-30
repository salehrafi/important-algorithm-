#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void Insert_At_tail(Node* &head, int data){
    Node* newNode = new Node(data);
    Node* temp;
    temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node* &head){
    Node* temp;
    temp = head;
    while(temp!=NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    Insert_At_tail(head, 100);
    Insert_At_tail(head, 200);
    Insert_At_tail(head, 300);
    print_linked_list(head);
    return 0;
}