#include "QueType.h"

template <class ItemType>
QueType<ItemType>::QueType() {
    maxQue = 500;
    front = rear = 0;
    items = new ItemType[maxQue];
}
// Class constructor.

template <class ItemType>
QueType<ItemType>::QueType(int max) {
    maxQue = max;
    front = rear = 0;
    items = new ItemType[maxQue];
}
// Parameterized class constructor.
template <class ItemType>
QueType<ItemType>::~QueType() {        
    delete [] items;
    front = rear = NULL;
}
// Class destructor.

template <class ItemType>
void QueType<ItemType>::makeEmpty() {    
    front = rear = 0;
}
// Function: Initializes the queue to an empty state.
// Post: Queue is empty.

template <class ItemType>
bool QueType<ItemType>::isEmpty() const {
    return false;
}
// Function: Determines whether the queue is empty.
// Post: Function value = (queue is empty)

template <class ItemType>
bool QueType<ItemType>::isFull() const {
    return false;
}
// Function: Determines whether the queue is full.
// Post: Function value = (queue is full)

template <class ItemType>
void QueType<ItemType>::enqueue(ItemType newItem) {
}
// Function: Adds newItem to the rear of the queue.
// Post: If (queue is full) FullQueue exception is thrown
//       else newItem is at rear of queue.

template <class ItemType>
void QueType<ItemType>::dequeue(ItemType& item) {
}
// Function: Removes front item from the queue and returns it
// in item.
// Post: If (queue is empty) EmptyQueue exception is thrown
//       and item is undefined
//       else front element has been removed from queue and
//       item is a copy of removed element.

template <class ItemType>
ItemType QueType<ItemType>::peek() {
    ItemType i;
    return i;
}
// returns the item at the front of the queue without
// removing the item from the queue

template <class ItemType>
int QueType<ItemType>::length() {
    return -1;
}
// Function: returns the number of items in the queue

template <class ItemType>
void QueType<ItemType>::printQueue(ofstream&) {
}
// displays QueueItems
