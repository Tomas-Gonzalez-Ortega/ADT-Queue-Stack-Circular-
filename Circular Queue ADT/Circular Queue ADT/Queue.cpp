/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07 Circular Queue ADT
 * Description: Implemention of the Queue ADT as a contiguous structure; circular implementation, utilizing two variables front and rear pointing to the first element in the queue and the first spot after the last element, respectively.
 * @version Copyright © 2017-11-05 All rights reserved. Langara College
 */

#include "Queue.h"
#include <iostream>
#include <stdexcept>
using namespace std;

/**
 No-arg constructor assuming that for an empty Queue, both front and rear will be -1
*/
Queue::Queue() {
    front = -1;
    rear = -1;
}

/**
 Inserts a new element at the rear of the queue
 @param element the actual element we want insert on queue
*/
void Queue::insertBack(int element) throw (runtime_error) {
    cout << "Enqueuing " << element << " \n";
    if(isFull()) {
        throw runtime_error("Error: Queue is currently full\n");
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % CAPACITY;
    }
    Array[rear] = element;
}
    
/**
 Deletes the front element of the queue
*/
void Queue::removeFront() throw (runtime_error) {
    cout << "Dequeuing \n";
    if(isEmpty()) {
        throw runtime_error("Error: Queue is actually empty\n");
    }
    else if(front == rear ) {
        rear = front = -1;
    } else {
        front = (front + 1) % CAPACITY;
    }
}

/**
 Checks if the queue is empty comparing front and rear to -1
 @return true if the queue is empty
 @return false if at least 1 element is contained
 */
bool Queue::isEmpty() {
    return (front == -1 && rear == -1);
}
    
/**
 Checks if the queue is full
 @return true if ths queue is full
 @return false if not
*/
bool Queue::isFull() {
    return ((rear + 1) % CAPACITY == front);
}
    
/**
 Returns the front element
*/
int Queue::Front() {
    if(front == -1) {
        throw runtime_error("Error: cannot return front from empty queue\n");
        return -1;
    }
    return Array[front];
}
    
/**
 Prints the elements in queue from front to rear
*/
void Queue::queuePrinter() {
    // Finds the number of elements in queue
    int count = (rear + CAPACITY - front) % CAPACITY + 1;
    cout << "Queue  : ";
    for(int i = 0; i < count; i++) {
        int index = (front + i) % CAPACITY; // Each element while travesing circularly from front
        cout << Array[index] << " ";
    }
    cout << endl << endl;
}
