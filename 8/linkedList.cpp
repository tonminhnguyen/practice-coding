#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void add(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteNode() {
        if (!head) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        if (!head->next) {
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            while (temp->next->next) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }

    void traverse() {
        if (!head) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    LinkedList list;

    list.add(10);
    list.add(20);
    list.add(30);

    std::cout << "Linked list after additions: ";
    list.traverse();

    list.deleteNode();
    std::cout << "Linked list after deleting from end: ";
    list.traverse();

    list.deleteNode();
    std::cout << "Linked list after deleting from end: ";
    list.traverse();

    list.deleteNode();
    std::cout << "Linked list after deleting from end: ";
    list.traverse();

    return 0;
}
