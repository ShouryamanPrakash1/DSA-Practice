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

Node* reverselist(Node* head)
{
    Node* curr =  head,*prev = nullptr,*next;

    while(curr != nullptr)
    {
        //store next
        next = curr->next;
 
        //turn the pointer of curr to nullptr
        curr->next = prev;

        //move node one step ahead
        prev = curr;
        curr = next;
    }
    return prev;
};

void printlist(Node* node)
{
while(node != nullptr)
{
    cout << " " << node->data;
    node = node->next;
}
 
}


int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

      // Print the original linked list
    cout << "Given Linked list:";
    printlist(head);
    
      // Function call to return the reversed list
    head = reverselist(head);

      // Print the reversed linked list
    cout << "\nReversed Linked List:";
    printlist(head);

    return 0;
}