#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next; // next node in the Linked List
};


void printList(Node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;    
}


void insertAtHead(Node **head, int data) {
     
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAtTail(Node **head, int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int main()
{
    Node * head = new Node();   // head of the Linked List
    Node * second = new Node(); // second node in the Linked List
    Node * third = new Node();  // third node in the Linked List

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);

    return 0;
}