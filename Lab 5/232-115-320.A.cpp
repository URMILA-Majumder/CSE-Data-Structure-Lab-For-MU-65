#include <iostream>
using namespace std;

// Structure for an individual node
struct Node {
    int val;
    Node *next;
};

// Structure to manage the Stack
struct Stack {
    Node *top;

    // Constructor to initialize an empty stack
    Stack() {
        top = NULL;
        cout << "Linked List Stack initialized!\n";
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    // Creating the Stack object
    Stack s;

    if(s.isEmpty()) {
        cout << "The stack is currently empty.\n";
    }

    return 0;
}

