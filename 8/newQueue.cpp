//
// Created by Admin on 1/19/2025.
//
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor to initialize the queue.
    Queue() : front(nullptr), rear(nullptr) {}


    // If the queue is empty (rear == nullptr), both front and rear will point to the new node.
    // If the queue is not empty, the rear pointer will be updated to point to the new node, and the previous rear node's next pointer will point to the new node.

    // Enqueue operation: Add an element to the rear of the queue.
    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr) {
            // If the queue is empty, both front and rear will point to the new node.
            front = rear = newNode;
        } else {
            // Add the new node to the end and move the rear pointer.
            rear->next = newNode;
            rear = newNode;
        }
        cout << value << " enqueued to the queue" << endl;
    }


    // If the queue is empty (front == nullptr), it prints a message indicating the queue is empty.
    // After dequeuing, the front pointer is moved to the next node.
    // If the queue becomes empty after the dequeue operation, the rear pointer is also set to nullptr to indicate an empty queue.
    // Dequeue operation: Remove an element from the front of the queue.
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;
        cout << temp->data << " dequeued from the queue" << endl;

        front = front->next; // Move the front pointer to the next node.

        // If the queue becomes empty, set rear to nullptr as well.
        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp; // Free the memory of the dequeued node.
    }

    // Display the elements of the queue.
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();
    q.dequeue();
    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.display();

    return 0;
}
