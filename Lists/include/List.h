#ifndef LIST_H
#define LIST_H

class List
{
private:
    /* data */
    typedef struct Node
    {
        int data;
        Node *next;
    }* nodePtr;

    nodePtr head;
    nodePtr temp;
    nodePtr current;

public:
    List();
    void addNodetoTail(int data);
    void addNodetoHead(int data);
    void deleteNode(int data);
    void printList();
};





#endif // LIST_H