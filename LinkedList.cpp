#include<iostream>
using namespace std;
class node{
    public:
        string name;
        node* next;
    node(string name){
        this->name = name;
        this->next = NULL;
    }
};

int main(){
    
    // node a("Saleh"),b("Rafi"),c("Shayan");
    // a.next = &b;
    // b.next = &c;
    // c.next = NULL;
    // for dynamic allocation

    node* head = new node("Saleh");
    node* a = new node("Rafi");
    node* b = new node("Shayan");

    head->next = a;
    a->next = b;
    b->next = NULL;

    
    cout << (a->name) << " " << (b->name) << " " << head->name << endl;
    
    
}
