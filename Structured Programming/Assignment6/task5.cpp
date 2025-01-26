#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

// Insert a new node
void insert(Node *&head, int value) {
    Node *newNode = new Node{value, head};
    head = newNode;
}

// Delete a node
void deleteNode(Node *&head, int value) {
    Node *current = head, *prev = nullptr;
    while (current && current->data != value) {
        prev = current;
        current = current->next;
    }
    if (!current) {
        cout << "Value not found in the list.\n";
        return;
    }
    if (prev) prev->next = current->next;
    else head = current->next;
    delete current;
}

// Traverse and display the linked list
void display(Node *head) {
    while (head) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node *head = nullptr;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    cout << "Linked List after insertion: ";
    display(head);

    deleteNode(head, 20);
    cout << "Linked List after deletion: ";
    display(head);

    return 0;
}
