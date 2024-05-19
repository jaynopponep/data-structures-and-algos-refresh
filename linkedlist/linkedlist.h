#ifndef DS_AREFRESH_LINKEDLIST_H
#define DS_AREFRESH_LINKEDLIST_H

class LinkedList{
private:
    typedef struct node{
        int data;
        node* next; // Points to the next node
    }* nodePtr;
    // basically defining nodePtr as struct node* (with the use of typedef)
    // to put simply, "typedef" assigns "struct node{}*" to nodePtr and takes its attributes and such

    nodePtr head; // head node
    nodePtr curr;
    nodePtr temp;
    nodePtr prev;
    nodePtr next;

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
