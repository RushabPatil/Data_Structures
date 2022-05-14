#include <iostream>


struct Node {
    int data;
    Node *next; // next node in the Linked List
};

int main()
{
    Node * A = NULL; 
    Node * temp = new Node();

    temp->data = 2;
    temp->next = NULL;
    A = temp;

    temp = new Node();
    temp->data = 3;
    temp->next = NULL;


    Node * temp1 = A;
    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    
    return 0;
}