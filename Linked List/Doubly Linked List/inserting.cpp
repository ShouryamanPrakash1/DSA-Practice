// insert a node in doubly linked list 
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;

    Node(int value)
    {
        data = value;
        prev=next=nullptr;
    }
};

Node* insertnode(Node* head,int value,Node* beforenode)
{
// if the list is empty or node is inserted before head
Node* newnode = new Node(value);
if(head == beforenode)
{
newnode->next = head;
head->prev = newnode;
return newnode;
}

// Finding the beforenode
Node* curr = head;
while(curr!=nullptr && curr->next != beforenode)
{
    curr = curr->next;
}

// inserting a node beforenode
if(curr != nullptr)
{
newnode->next = beforenode;
newnode->prev = curr;
beforenode->prev = newnode;
curr->next = newnode;
}
return head;

}

void PrintList()
{

}

int main()
{

}