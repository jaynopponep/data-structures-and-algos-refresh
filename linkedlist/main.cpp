#include <cstdlib>
#include "LinkedList.h"

using namespace std;

int main(int argc, char** argv) {
    LinkedList Test;
    Test.addNode(1);
    Test.addNode(2);
    Test.addNode(4);
    Test.printList();
    Test.insertAt(1, 3);
    Test.printList();
    return 0;
}