#include <iostream>
#include <cstdlib>

#include "List.h"

using namespace std;

// Constructor
List::List()
{
    //pointer declaration
    head = NULL;
    temp = NULL;
    current = NULL;
}


/**
 * @brief Add a node to the tail of the list
 * 
 * @param data is the data to be added to the list
 */
void List::addNodetoTail(int data)
{
    //create a new node 
    nodePtr newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    //if list is empty
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        //if list is not empty
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
}

/**
 * @brief Add a node to the head of the list
 * 
 * @param data is the data added to the list
 */
void List::addNodetoHead(int data)
{
    //create a new node
    nodePtr newNode = new Node();
    newNode->data = data;
    newNode->next = head;

    //if list is empty
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        //if list is not empty
        newNode -> next = head;
        head = newNode;
        cout << "New Node added to the list" << endl;
    }
}


/**
 * @brief Delete a node from the list
 * 
 * @param data is the data to be deleted from the list
 */
void List::deleteNode(int data)
{
    nodePtr delPtr = NULL;
    temp = head;
    current = head;

    if(current == NULL)
    {
        cout << "List is empty" << endl;
        delete delPtr;
    }

    while (current != NULL)
    {
        if (current->data == data)
        {
            delPtr = current;
            current = current->next;
            temp->next = current;
            delete delPtr;
            cout << "Node deleted" << endl;
        }
        else
        {
            temp = current;
            current = current->next;
        }
    }
    
}


/**
 * @brief this function prints the Linked List
 */
void List::printList()
{
    current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl; 
}