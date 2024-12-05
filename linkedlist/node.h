#ifndef NODE_H
#define NODE_H

#include <iostream>

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
public:
    LinkedList(); // Constructor
    ~LinkedList(); // Destructor

    void append(int value); // Add a new node to the end of the list
    void insert(int value, int position); // Insert a new node at a given position
    void remove(int value); // Remove the first node with the given value
    void display(Node* head) const; // Display the list

private:
    Node* head;
};

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::insert(int value, int position) {
    Node* newNode = new Node(value);
    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* current = head;
    for (int i = 0; i < position - 1 && current != nullptr; ++i) {
        current = current->next;
    }
    if (current != nullptr) {
        newNode->next = current->next;
        current->next = newNode;
    } else {
        delete newNode; // Position is out of bounds
    }
}

void LinkedList::remove(int value) {
    if (head == nullptr) return;
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->data != value) {
        current = current->next;
    }
    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

// Function to display the linked list
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

#endif // NODE_H