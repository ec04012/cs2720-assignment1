#include <iostream>

#include "QueType.cpp"

/**
 * Class to test methods for Queue and output to stdout instead of file
 **/

template <class ItemType>
void printQue(QueType<ItemType> &q) {
    // displays QueueItems
    ItemType tempItem;
    int len = q.length();
    cout << "Queue: ";
    for(int i = 0; i < len; i++) {
        q.dequeue(tempItem);
        cout << tempItem << " ";
        q.enqueue(tempItem);
    }
    cout << endl;
}

template <class ItemType>
void printInfo(QueType<ItemType> &que) {
    cout << "Length: " << que.length() << endl;
    printQue(que);
    cout << "IsEmpty: " << que.isEmpty() << endl;
    cout << "IsFull: " << que.isFull() << endl << endl;
}

int main() {
    QueType<int> que = QueType<int>(4);
    printInfo(que);
    int item;

    que.enqueue(20);
    printInfo(que);

    que.enqueue(30);
    printInfo(que);

    que.enqueue(40);
    printInfo(que);

    que.dequeue(item);
    printInfo(que);

    que.dequeue(item);
    printInfo(que);

    que.dequeue(item);
    printInfo(que);

    return 0;
}