//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>
using namespace std;

// Stack is LIFO, linked list is a series of nodes linked together and
// Idea is that each node in linked list represent an data in stack and the top of the stack is the first node of the linkedlist
// when push -> create new node and add to the first of the linkedlist
// when pop -> delete first node (which is the top of the stack)

class StackNode {
public:
    int data;
    StackNode* next;

    StackNode(int value) {
        data = value;
        next = nullptr;
    }
};

class StackLinkedList {
    StackNode* top;
public:
    StackLinkedList() {
        top = nullptr;
    }


    void push(int value) {
        StackNode* newNode = new StackNode(value);
        newNode->next = top;
        top = newNode;
        cout << value << " pushed ";
    }

    void pop() {
        if (!top) {
            cout << "stack is empty" << endl;
            return;
        }
        StackNode* temp = top;
        top = top->next;
        cout << temp->data << " popped out" << endl;
        delete temp;
    }

    void display() {
        if (!top) {
            cout << "stack is empty" << endl;
            return;
        }
        StackNode* current = top;
        cout << "Stack elements: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }


    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    StackLinkedList stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.display();

    stack.pop();
    stack.pop();

    cout << "stack empty: " << (stack.isEmpty() ? "yes" : "no") << endl;
    stack.display();

    return 0;
}
