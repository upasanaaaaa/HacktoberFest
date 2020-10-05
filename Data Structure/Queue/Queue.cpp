#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node( int n ) {
        data = n;
        left = right = NULL;
    }
};

class LinkedList{

public:
    Node *front, *rear;

    LinkedList() {
        front = rear = NULL;
    }

    int insert( int num ) {
        Node *newNode = new Node( num );
        if( !rear )
            front = rear = newNode;
        else{
            rear->right = newNode;
            newNode->left = rear;
            rear = newNode;
        }
        return newNode->data;
    }

    int remove() {
        int num = front->data;
        if( front == rear ) {
            delete front;
            front = rear = NULL;
        } else {
            front = front->right;
            delete front->left;
            front->left = NULL;           
        }
        return num;
    }
};

class Queue {
public:
    LinkedList list;
    Queue(){
        list = LinkedList();
    }

    int insert( int num ) {
        return list.insert( num );
    }

    int remove() {
        return list.remove();
    }

    void print() {
        Node* temp = list.front;
        cout << "Queue: ";
        while( temp ) {
            cout << temp->data << " " ;
            temp = temp->right;
        }
        cout << endl;
    }
};

int main(){
    Queue qu = Queue();
    qu.print();
    
    qu.insert(10);
    qu.print();

    qu.insert(20);
    qu.print();

    qu.remove();
    qu.print();

    return 0;
}