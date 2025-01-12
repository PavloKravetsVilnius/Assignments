#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void deleteNode(Node*& head, int value) {
    if (head == nullptr) return;
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != value) temp = temp->next;
    if (temp->next) {
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }
}

void display(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        insert(head, value);
    }

    cout << "Linked List: ";
    display(head);

    int delValue;
    cout << "Enter value to delete: ";
    cin >> delValue;
    deleteNode(head, delValue);

    cout << "After deleting " << delValue << ": ";
    display(head);

    return 0;
}