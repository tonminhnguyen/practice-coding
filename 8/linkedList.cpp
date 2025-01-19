#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    // Constructor khởi tạo danh sách liên kết rỗng.
    LinkedList() : head(nullptr) {}

    // Thêm phần tử vào cuối danh sách liên kết.
    void add(int value) {
        // Tạo một node mới.
        Node* newNode = new Node();
        newNode->data = value;  // Gán giá trị cho phần tử trong node.
        newNode->next = nullptr; // Đặt con trỏ next của node mới bằng nullptr, vì đây sẽ là node cuối cùng trong danh sách.

        // Kiểm tra nếu danh sách liên kết hiện tại là rỗng.
        if (!head) {
            head = newNode;  // Nếu danh sách rỗng, node mới trở thành head.
        } else {
            // Nếu danh sách không rỗng, duyệt qua danh sách cho đến node cuối cùng.
            Node* temp = head;
            while (temp->next) {  // Duyệt qua các node cho đến khi gặp node cuối cùng (next = nullptr).
                temp = temp->next;
            }
            temp->next = newNode;  // Đặt node mới vào cuối danh sách.
        }
    }

    // Xóa node cuối cùng của danh sách.
    void deleteNode() {
        // Kiểm tra nếu danh sách liên kết rỗng.
        if (!head) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        // Nếu chỉ có một phần tử trong danh sách (head là node duy nhất).
        if (!head->next) {
            delete head;    // Xóa node duy nhất.
            head = nullptr; // Đặt head bằng nullptr, vì danh sách giờ đã rỗng.
        } else {
            // Nếu có nhiều hơn một phần tử, duyệt qua danh sách để tìm node trước node cuối cùng.
            Node* temp = head;
            while (temp->next->next) {  // Duyệt qua các node cho đến khi gặp node trước node cuối cùng.
                temp = temp->next;
            }
            delete temp->next;   // Xóa node cuối cùng.
            temp->next = nullptr; // Đặt con trỏ next của node trước node cuối cùng thành nullptr (danh sách kết thúc).
        }
    }

    // Duyệt qua danh sách và in ra các phần tử.
    void traverse() {
        // Kiểm tra nếu danh sách liên kết rỗng.
        if (!head) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        // Duyệt qua tất cả các node trong danh sách.
        Node* temp = head;
        while (temp) {  // Duyệt qua các node cho đến khi gặp nullptr (cuối danh sách).
            std::cout << temp->data << " -> "; // In ra giá trị của node.
            temp = temp->next;  // Di chuyển đến node tiếp theo.
        }
        std::cout << "NULL" << std::endl;  // Cuối cùng in ra "NULL" để thể hiện rằng danh sách đã kết thúc.
    }
};

int main() {
    LinkedList list;

    list.add(10);  // Thêm 10 vào danh sách.
    list.add(20);  // Thêm 20 vào danh sách.
    list.add(30);  // Thêm 30 vào danh sách.

    std::cout << "Linked list after additions: ";
    list.traverse();  // In ra danh sách sau khi thêm phần tử.

    list.deleteNode();  // Xóa node cuối cùng (30).
    std::cout << "Linked list after deleting from end: ";
    list.traverse();  // In ra danh sách sau khi xóa.

    list.deleteNode();  // Xóa node cuối cùng (20).
    std::cout << "Linked list after deleting from end: ";
    list.traverse();  // In ra danh sách sau khi xóa.

    list.deleteNode();  // Xóa node cuối cùng (10).
    std::cout << "Linked list after deleting from end: ";
    list.traverse();  // In ra danh sách sau khi xóa.

    return 0;
}
