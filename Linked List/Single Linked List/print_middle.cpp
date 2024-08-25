//print the middle of the linked list 

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

int middlenode(Node* head)
{
vector<int> linkedlist;
while(head != nullptr)
{
    linkedlist.push_back(head->data);
    head = head->next;
}

int middle_node = linkedlist.size()/2;

return linkedlist[middle_node];
};




int main() {

    // Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);
    head->next->next->next->next->next->next = new Node(70);
  
      // Example of printing the middle value of the
    // linked list
    cout << "Middle Value Of Linked List is: "
         << middlenode(head) << endl;

    return 0;
}