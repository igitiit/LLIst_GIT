#include "LinkedList.h"

int main() {
    LinkedList list;

    list.insertAtEnd(5);
    list.insertAtBeginning(10);
    list.insertAtEnd(15);

    list.display(); // Output: 10 5 15

    return 0;
}