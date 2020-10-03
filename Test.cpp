#include <iostream>

#include "QueType.cpp"

template <class ItemType>
void printQue(QueType<ItemType> q) {
    // displays QueueItems
    QueType<ItemType> tempQueue = QueType<ItemType>(3);
    ItemType tempItem;
    while (!q.isEmpty()) {
        q.dequeue(tempItem);
        cout << tempItem << " ";
        tempQueue.enqueue(tempItem);
    }
    while (!tempQueue.isEmpty()) {
        tempQueue.dequeue(tempItem);
        q.enqueue(tempItem);
    }
    cout << endl;
}

int main() {
    QueType<int> que = QueType<int>(3);
    que.enqueue(124);
    que.enqueue(5);
    printQue(que);
    return 0;
}