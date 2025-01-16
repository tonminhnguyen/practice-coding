//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>
using namespace std;

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
            cout << "stack is empty";
            return;
        }
        StackNode* temp = top;
        top = top->next;
        cout << temp->data << " popped out";
        delete temp;
    }

    int peek() {
        if (!top) {
            cout << "empty stack";
            return -1;
        }
        return top->data;
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

    cout << "top element is: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    cout << "stack empty: " << (stack.isEmpty() ? "yes" : "no") << endl;
    return 0;
}
