//
// Created by Noppo on 5/7/2024.
//

#ifndef DS_AREFRESH_LINKEDLIST_H
#define DS_AREFRESH_LINKEDLIST_H

class LinkedList{
private:
    typedef struct node{
        int data;
        node* next; // Points to the next node
        node* prev;
    }* nodePtr;
    // basically defining nodePtr as struct node* (with the use of typedef)
    // to put simply, "typedef" assigns "struct node{}*" to nodePtr and takes its attributes and such

    nodePtr head; // head node
    nodePtr curr;
    nodePtr temp;

public:
    LinkedList();
    void addNode(int addData);
    void deleteNode(int targetData);
    void printList();
    void indexOf(int targetData);
    void insertAt(int targetIndex, int addData);
    void reverseList();
};

#endif //DS_AREFRESH_LINKEDLIST_H
