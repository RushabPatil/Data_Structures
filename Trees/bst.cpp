#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left; // left child               
    Node *right; // right child
};


Node* createNode(int data) {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);

    cin.get();

}
