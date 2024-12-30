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

void insert_at_head(Node *&head, int data){
    Node* newNode = new Node(data);
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void print_the_linked_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << "\n";
        temp = temp->next;
    }
}
int main(){
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *b = new Node(30);
        head->next = a;
        a->next = b;
        b->next = NULL;

        insert_at_head(head,100);
        print_the_linked_list(head);

    return 0;
}