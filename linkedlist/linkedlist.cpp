#include "node.h"
#include <iostream>

int main() {
    // Create a few nodes
    Node* head = new Node(1);
    head->next = new Node(2);   

    // Display the linked list
    std::cout << "Initial list: ";
    display(head);

    // Insert a node at the beginning
    Node* newHead = new Node(0);
    newHead->next = head;
    head = newHead;
    std::cout << "After inserting 0 at the beginning: ";
    display(head);

    // Insert a node at the end
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = new Node(4);
    std::cout << "After inserting 4 at the end: ";
    display(head);

    // Insert a node in the middle
    Node* middle = head->next->next; // Pointing to the node with data 2
    Node* newNode = new Node(5);
    newNode->next = middle->next;
    middle->next = newNode;
    std::cout << "After inserting 5 after the node with data 2: ";
    display(head);

    // Delete the first node
    Node* temp = head;
    head = head->next;
    delete temp;
    std::cout << "After deleting the first node: ";
    display(head);

    // Delete the last node
    current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
    std::cout << "After deleting the last node: ";
    display(head);

    // Delete a node in the middle
    current = head;
    while (current->next->data != 2) {
        current = current->next;
    }
    temp = current->next;
    current->next = current->next->next;
    delete temp;
    std::cout << "After deleting the node with data 2: ";
    display(head);

    // Free the remaining allocated memory
    current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}