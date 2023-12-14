#pragma once
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

Node* mergeSortedLists(Node* l1, Node* l2) {
    Node* dummy = new Node(-1);
    Node* current = dummy;

    while (l1 != nullptr && l2 != nullptr) {
        if (l1->data < l2->data) {
            current->next = l1;
            l1 = l1->next;
        }
        else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    if (l1 != nullptr) {
        current->next = l1;
    }
    else {
        current->next = l2;
    }

    return dummy->next;
}


