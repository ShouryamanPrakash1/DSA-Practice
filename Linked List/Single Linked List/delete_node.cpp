#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node* next;
    int data;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void DeleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
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
Node* head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
head->next->next->next = new Node(4);
head->next->next->next->next = new Node(5);

// Printing the orignal list
PrintList(head);
cout << endl;


// deleting the node
DeleteNode(3,head);
PrintList(head);

return 0;


}