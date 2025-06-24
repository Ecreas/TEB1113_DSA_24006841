// 24006841 Najmi G2
#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next;
    Node* prev;
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
            newNode->prev = tails; 
        } else {
            head->prev = newNode;
            newNode->next = head;
            newNode->prev = tails;
            tails->next = newNode;
            tails = newNode;
            tails->next = head; 
        }
    }

    void display() {
        if (tails == nullptr) {
            cout << "the list is empty" << endl;
            return;
        };
        Node* current = tails;
        do {
            cout << current->name << "-> ";
            current = current->prev;
        } while (current != tails);
        cout << current->name << endl; 
    }


};

int main() {


CircularLinkedList cll;

cll.addNode("Ali");
cll.addNode("Bob"); 
cll.addNode("Cade");
cll.addNode("Dayah");

cll.display();


    return 0;

}
