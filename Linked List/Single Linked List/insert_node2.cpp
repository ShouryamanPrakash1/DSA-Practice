// insert a node in linked list before a given node

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node* next;
    int data;
    Node(int value)
    {
        next = nullptr;
        data = value;
    }
};

Node* InsertNode(Node* head,int value,Node* beforenode)
{
Node* newnode = new Node(value);

// inserting node in an empty list or before the head
if(head == beforenode)
{
    newnode->next = head;
    return newnode;
}

// finding the beforenode

Node* curr = head;
while(curr != nullptr && curr->next != beforenode)
{
    curr = curr->next;
}

// inserting the node before beforenode
if(curr != nullptr)
{
    newnode->next = beforenode;
    curr->next = newnode;
}
return head;
}

void PrintList(Node* head)
{
    Node* curr = head;
    while(curr != nullptr)
    {
        cout << " " << curr->data;
        curr = curr->next;
    }
}



int main()
{
Node* head = new Node(2);
head->next = new Node(3);
head->next->next = new Node(4);
head->next->next->next = new Node(5);

// printing the orignal list
PrintList(head);
cout << endl;

// inserting the new node
int data = 1;
Node* change = head->next->next;
head = InsertNode(head,data,change);

PrintList(head);
return 0;

}