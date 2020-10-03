#include "QueType.h"

class EmptyQueue {};

class FullQueue {};

template <class ItemType>
QueType<ItemType>::QueType() {
    // Class constructor.
    maxQue = 500;
    front = rear = 0;
    items = new ItemType[maxQue];
}

template <class ItemType>
QueType<ItemType>::QueType(int max) {
    // Parameterized class constructor.
    maxQue = max;
    front = rear = 0;
    items = new ItemType[maxQue];
}

template <class ItemType>
QueType<ItemType>::~QueType() {
    // Class destructor.
    delete[] items;
    front = rear = NULL;
}

template <class ItemType>
void QueType<ItemType>::makeEmpty() {
    // Function: Initializes the queue to an empty state.
    // Post: Queue is empty.
    front = rear = 0;
}

template <class ItemType>
bool QueType<ItemType>::isEmpty() const {
    // Function: Determines whether the queue is empty.
    // Post: Function value = (queue is empty)
    return front == rear;
}

template <class ItemType>
bool QueType<ItemType>::isFull() const {
    // Function: Determines whether the queue is full.
    // Post: Function value = (queue is full)
    return (rear + 1) % maxQue == front;
}

template <class ItemType>
void QueType<ItemType>::enqueue(ItemType newItem) {
    // Function: Adds newItem to the rear of the queue.
    // Post: If (queue is full) FullQueue exception is thrown
    //       else newItem is at rear of queue.
    if (isFull) {
        throw FullQueue();
    }
    rear = (rear + 1) % maxQue;
    items[rear] = newItem;
}

template <class ItemType>
void QueType<ItemType>::dequeue(ItemType& item) {
    // Function: Removes front item from the queue and returns it
    // in item.
    // Post: If (queue is empty) EmptyQueue exception is thrown
    //       and item is undefined
    //       else front element has been removed from queue and
    //       item is a copy of removed element.
    if (isEmpty()) {
        throw EmptyQueue();
    }
    front = (front + 1) % maxQue;
    return front;
}

template <class ItemType>
ItemType QueType<ItemType>::peek() {
    // returns the item at the front of the queue without
    // removing the item from the queue
    if (isEmpty()) {
        throw EmptyQueue();
    }
    return items[front + 1];
}

template <class ItemType>
int QueType<ItemType>::length() {
    // Function: returns the number of items in the queue
    if (rear >= front) {
        return rear - front;
    }
    // if rear is before front
    return maxQue - front - 1 + rear;
}

template <class ItemType>
void QueType<ItemType>::printQueue(ofstream&) {
    // displays QueueItems
    QueType<ItemType> temp = QueType<ItemType>(maxQue);
    ItemType item;
    while (!isEmpty()) {
        item = this->peek();
        stream << item << " ";
        this->dequeue();
        temp.enqueue(item)
    }
    while (!temp.isEmpty()) {
        item = temp.peek();
        this.dequeue();
        this->enqueue(item)
    }
}
