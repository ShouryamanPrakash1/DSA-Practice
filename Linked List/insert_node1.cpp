// insert node at the begining of the list 


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *next;
    int data;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

Node* InsertAtFront(Node* head,int value)
{
// create new node 
Node* newnode = new Node(value);

newnode->next = head;

return newnode;
}

// print linkedlist
void printlist(Node* head)
{
    Node* curr = head;
while(curr != nullptr)
{
    cout << " " << curr->data;
    curr = curr->next;  // This line was missing, causing an infinite loop

}
cout << endl;
}

int main()
{
Node* head = new Node(2);
head->next = new Node(3);
head->next->next = new Node(4);
head->next->next = new Node(5);


cout << "Print the orignal linked list";
printlist(head);

int data = 1;
head = InsertAtFront(head,data);
cout << "Printing the list after inserting a new node";
printlist(head);

return 0;

}