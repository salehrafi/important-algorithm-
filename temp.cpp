// a program of singley linked list
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

void insert_data_into_head(Node* &head, int data){
    Node* NewNode = new Node(data);
    // NewNode->data = data;
    NewNode->next = head;
    head = NewNode;
}

void print_the_Linked_list(Node* temp){
    Node* head;
    head = temp;
    while (head!=NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
    
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_data_into_head(head,490);
    insert_data_into_head(head,490);
    insert_data_into_head(head,490);

    print_the_Linked_list(head);

    return 0;
}