#include <iostream>
#include "node_class.h"

int main() 
{
    Node* list1 = new Node(1);
    list1->next = new Node(3);
    list1->next->next = new Node(5);

    Node* list2 = new Node(2);
    list2->next = new Node(4);
    list2->next->next = new Node(6);

    Node* mergedList = mergeSortedLists(list1, list2);

    Node* current = mergedList;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
}