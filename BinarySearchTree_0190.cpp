#include <iostream>
using namespace std;

//Membuat class node
class Node{

    //Memberi akses modifier mendeklarasi variabel dan object node
public:
    string info;
    Node* leftChild;
    Node* rightChild;


    // membuat constructor untuk class node
    Node(string i, Node* l, Node* r){
        //memberi nilai parameter ke variabel
        info = i;
        leftChild = l;
        rightChild = r;
    }
};

// membuat class BinarTree
class BinaryTree {

    //memberi akses modifier dan deklarasi object
public:
   Node* ROOT;

   //membuat constructor dan memberi nilai kepada object Root
   BinaryTree() {
    ROOT = nullptr;
   }

   //membuat prosedur insert
   void insert(string element) {
    
    //memberi nilai untuk setiap object yang berada di dalam prosedur insert
    Node* newNode = new Node(element, nullptr, nullptr);
    newNode->info = element;
    newNode->leftChild = nullptr;
    newNode->rightChild = nullptr;
    
    Node* parent = nullptr;
    Node* currentNode = nullptr;
    search(element, parent, currentNode);

    //membuat conditional statement
    if (parent == nullptr) {
        ROOT = newNode;
        return;
    }

    if (element < parent->info)
    {
        parent->leftChild = newNode;
    }
    else if (element > parent->info)
    {
        parent->rightChild = newNode;
    }
   }

    void search(string element, Node *&parent, Node *&currentNode)
    {
        currentNode = ROOT;
        parent = NULL;

        while((currentNode != NULL) &&
            (currentNode->info != element))
            {
                parent = currentNode;

                if (element < currentNode->info)
                    currentNode = currentNode->leftChild;
                else
                    currentNode = currentNode->rightChild;
        }
    } 

}