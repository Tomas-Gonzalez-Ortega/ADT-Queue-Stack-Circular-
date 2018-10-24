/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07 Deque ADT
 * Description: Implemention of the Dequeue header file using double
 * @version Copyright © 2017-11-09 All rights reserved. Langara College
 */

#include "Deque.h"
#include <iostream>
#include <stdexcept>
using namespace std;

/**
 No-arg constructor assuming that for an empty Queue, both front and rear will be NULL
 */
Deque::Deque() {
    front = NULL;
    rear = NULL;
    count = 0;
}

/**
 Insert an element in the front of the queue
 */
void Deque::InsertFront(int element) {
    // Creates a new node
    Node* temp = new Node();
    temp->data = element;
    temp->next = NULL;
    temp->prev = NULL;
    
    if (isEmpty()) {
        // Adds the first element
        front = rear = temp;
    } else {
        // Prepends to the list and fixes links
        temp->next = front;
        front->prev = temp;
        front = temp;
    }
    count++;
}

/**
 Deletes the front element of the queue
 */
int Deque::RemoveFront() throw (runtime_error) {
    if (isEmpty()) {
        throw runtime_error("Error: Queue is currently empty\n");
    }
    
    //  Data in the front node
    int ret = front->data;
    
    // Delete the front node and fix the links
    Node* temp = front;
    if (front->next != NULL) {
        front = front->next;
        front->prev = NULL;
    } else {
        front = NULL;
    }
    count--;
    delete temp;
    return ret;
}

/**
 Inserts a new element at the rear of the queue
 @param element the actual element we want insert on queue
 */
void Deque::InsertBack(int element) {
    // Create a new node
    Node* temp = new Node();
    temp->data = element;
    temp->next = NULL;
    temp->prev = NULL;
    
    if ( isEmpty() ) {
        // Add the first element
        front = rear = temp;
    }
    else {
        // Append to the list and fix links
        rear->next = temp;
        temp->prev = rear;
        rear = temp;
    }
    count++;
}

/**
 Deletes an element from the back of the queue
 @return ret the data allocated at the rear of the queue
 */
int Deque::RemoveBack() throw (runtime_error) {
    if (isEmpty()) {
        throw runtime_error("Error: Queue is currently empty\n");
    }
    
    //  Data in the rear node
    int rearData = rear->data;
    
    // Delete the front node and fix the links
    Node* temp = rear;
    if ( rear->prev != NULL ) {
        rear = rear->prev;
        rear->next = NULL;
    } else {
        rear = NULL;
    }
    count--;
    delete temp;
    return rearData;
}

/**
 Returns the front element of the queue
 @return the front element of the queue
 */
int Deque::Front() throw (runtime_error) {
    if (isEmpty())
        throw runtime_error("Error: Queue is currently empty\n");
    return front->data;
}

/**
 Returns the front element of the queue
 @return the element at the back of the queue
 */
int Deque::Back() throw (runtime_error) {
    if (isEmpty())
        throw runtime_error("Error: Queue is currently empty\n");
    return rear->data;
}

/**
 Returns the size of the queue
 @return the size of the queue
 */
int Deque::Size() {
    return count;
}

/**
 Checks if the queue is empty
 @return true if the queue is empty
 @return false if at least 1 element is contained
 */
bool Deque::isEmpty() {
    return (count == 0);
}
