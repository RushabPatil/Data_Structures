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
 * @brief 
 * 
 * @param data 
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
 * @brief 
 * 
 * @param data 
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
 * @brief 
 * 
 * @param data 
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