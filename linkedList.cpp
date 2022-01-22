#include <iostream>
#include <cstddef>

using namespace std;

class Node {
public:
//defie the node 
Node *next;
int data;


//Mehtod


//contrucntor
Node(int newData){
    data = newData;
    next = NULL;
}
Node(int newData, Node *newNext){
    data = newData;
    next = newNext;
}

//gettters and setters 

int getData(){
    return data;
}
Node *getNext(){
    return next;
}
void setData(int newData){
    data = newData;
}
void setData(Node *newNode){
    next = newNode;
}

};


int main()
{



return 0;

}