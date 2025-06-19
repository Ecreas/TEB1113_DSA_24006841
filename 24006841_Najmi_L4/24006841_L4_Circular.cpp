// 24006841 Najmi G2
#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next;
    Node(string name) : name(name) , next(nullptr) {}

    

};

class CircularLinkedList {
public:

string name;
Node* head = nullptr;
Node* tails = nullptr;

    void addNode(string name) {
        Node* newNode = new Node(name);
        if (head == nullptr) {
            head = newNode;
            tails = newNode;
            newNode->next = head; 
        } else {
            tails->next = newNode;
            tails = newNode;
            tails->next = head; 
        }
    }

    void display() {
        Node* current = head;

       do {
        cout << current->name << "-> ";
        current = current->next;
    } while (current != head);
cout << current->name << endl;

}
};

int main() {


CircularLinkedList cll;

cll.addNode("Ali");
cll.addNode("Bob"); 
cll.addNode("Cade");

cll.display();


    return 0;

}