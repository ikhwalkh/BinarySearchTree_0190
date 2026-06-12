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