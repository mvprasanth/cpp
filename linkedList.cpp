
#include <iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};
void printList(Node* n) 
{ 
    while (n != NULL) { 
        cout << n->data << " "; 
        n = n->next; 
    } 
} 
int main() 
{ 
    int s = 0;
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    
   head->data = 1; // assign data in first node 
    head->next = first; // Link first node with 
    // the second node 
    
    // assign data to second node 
    first->data = 2; 
    // Link second node with the third node 
    first->next = second; 
    
    second->data = 3; // assign data to third node 
    second->next = NULL; 
    
    printList(head);
   
    return 0; 
} 
