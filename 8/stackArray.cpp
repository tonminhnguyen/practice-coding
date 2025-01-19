//
// Created by minh.nguyen on 1/16/2025.
//
#include <iostream>
#define MAX 10
using namespace std;


class StackArray {
    int top;
    int arr[MAX];

public:
    StackArray() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX - 1) {
            cout << "stack out of range";
            return;
        }
        arr[++top] = value;
        cout << value << " pushed into the stack";
    }

    void pop() {
        if (top < 0) {
            cout << "cannot pop from empty stack";
            return;
        }
        cout << arr[top--] << " popped out";
    }

    int peek() {
        if (top < 0) {
            cout << "stack empty";
            return -1;
        }
        return arr[top];
    }

    void display() {
        if (top < 0) {
            cout << "stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    StackArray stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "top element is: " << stack.peek() << endl;

    stack.pop();
    stack.pop();

    cout << "stack empty: " << (stack.isEmpty() ? "yes" : "no") << endl;
    return 0;
}
