#include <cstdlib>
#include "linkedlist.h"

using namespace std;

int main(int argc, char** argv) {
    LinkedList Test;
    Test.addNode(1);
    Test.addNode(4);
    Test.addNode(9);
    Test.printList();
    Test.reverseList();
    Test.printList();
    return 0;
}
