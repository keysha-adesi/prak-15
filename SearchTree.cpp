#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    string info;
    Node *leftcild;
    Node *rightchild;

    // constructur for the node class
    Node(string i, Node *l, Node *r)
    {
        info = i;
        leftcild = l;
        rightchild = r;
    }
};

class BinaryTree
{
    public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = NULL; // initializing ROOT to NULL
    
    }

    // Insert a node in he binary search tree 
    void insert(string element)
    {

        Node *newNode = new Node(element, NULL, NULL);

        newNode->info = element;
        newNode->leftcild = NULL;
        newNode->rightchild = NULL;

        Node *parent = NULL;

    }
}






