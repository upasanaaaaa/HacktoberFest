/*
Note: 

Keep the usage of in-built function to the minimum
Add/Optimize  features
Please follow best coding practices
Add comments if necessary
And make the Code Bug free

*/

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node( int n ) {
        data = n;
        next = NULL;
    }
};

class LinkedList{

public:
    int size;
    Node *root;

    LinkedList(){
        root = NULL;
        size = 0;
    }

    void add( int num ) {
        Node *newNode = new Node( num );
        newNode->next = root;
        root = newNode;
        size++;
    }

    // Add appropriate message when the list is empty
    void del() {
        Node *nodeToBeDeleted = root;
        root = root->next;
        cout << "Deleting: " << nodeToBeDeleted->data << endl ;
        delete nodeToBeDeleted;
        size--;
    }

    Node* elementAt( int index ) {
    //     LinkedList: 10 <- 20 <- 30 <- 40
    //     Index:      0     1     2     3
    
        int len = size-1;
        Node *temp = root;

        while( index != len ) {
            temp = temp->next;
            len--;   
        }

        return temp;

    }

    void print() {
        Node* temp = root;
        cout << "Values: " ;
        while( temp ) {
            cout << temp->data << " " ;
            temp = temp->next;
        }
        cout << endl ;
    }

    // Test and Complete the following methods

    /*
    void printReverse(){
    
    }

    void reverse() {
        // Reverse the content of the list

    }

    void sort(){
        // sort elements of list ( ascending )

    }

    void clear() {
        // Delete all the elements from the list
    }

    bool contains( int value ) {
        // To check if element exist
    }

    */
        
};

int main() {
    LinkedList ll = LinkedList();
    ll.add( 1 );
    ll.print();

    ll.add( 2 );
    ll.print();
    
    ll.del();
    ll.print();

    ll.add(3);
    ll.print();
    
    int ind = 1 ;
    Node *node = ll.elementAt( ind );
    cout << "Element at index " << ind << ": " << node->data;

    return 0;
}