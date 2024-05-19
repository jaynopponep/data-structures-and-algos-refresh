#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "linkedlist.h"

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
    curr = nullptr;
    temp = nullptr;
    prev = nullptr;
    next = nullptr;
}

void LinkedList::addNode(int addData) {
    nodePtr n = new node;
    n->next = nullptr; // points to nothing, literally
    n->data = addData;

    if (head != nullptr) {
        curr = head;
        while (curr->next != nullptr){
            curr = curr->next;
        }
        curr->next = n;
    }
    else {
        head = n;
    }
}

void LinkedList::deleteNode(int targetData) {
    nodePtr delPtr = nullptr;
    temp = head;
    curr = head;
    while (curr != nullptr && curr->data != targetData) {
        temp = curr;
        curr = curr->next;
    }
    if (curr == nullptr) {
        cout << targetData << " wasn't found in the list.\n";
        delete delPtr; // Delete anyways to save memory
    } else {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if (delPtr == head) {
            head = head->next;
            temp = nullptr;
        }
        delete delPtr;
        cout << targetData << " has been deleted.\n";
    }
}

void LinkedList::printList() {
    curr = head;
    while (curr != nullptr) {
        cout << curr->data << "-> ";
        curr = curr->next;
    }
    cout << "nullptr" << endl;
}

void LinkedList::indexOf(int targetData) {
    int count = 0;
    if (head != nullptr) {
        curr = head;
        while (curr->next != nullptr & curr->data != targetData) {
            count++;
            curr = curr->next;
        }
        if (curr->data == targetData) {
            cout << "The index of " << targetData << " is: " << count;
        } else {
            cout << targetData << " could not be found.\n";
        }
    }
}

void LinkedList::insertAt(int targetIndex, int addData) {
    nodePtr n = new node;
    n->next = nullptr; // points to nothing, literally
    n->data = addData;
    int count = 0;
    if (head != nullptr) {
        curr = head;
        temp = head;
        while (targetIndex != count) {
            temp = curr;
            curr = curr->next;
            count++;
        }
        temp->next = n;
        n->next = curr;
    }
}

void LinkedList::reverseList() {
    if (head == nullptr || head->next == nullptr) { // handle single item linked list
        cout << head->data << " is the only item on the list.\n";
    } else {
        curr = head;
        next = nullptr;
        prev = nullptr;
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
}
