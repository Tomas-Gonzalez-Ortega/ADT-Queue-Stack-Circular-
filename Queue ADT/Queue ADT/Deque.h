/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07 The Stack ADT
 * Description: Deque is an abbreviation for double-ended queue. It is a data structure in which the elements can only be added or removed from front and back of the queue. A typical deque implementation support the following operations: Insert at front an element, insert at back an element, remove from back an element, remove from front an element, list the front element and list the back element implemented using a doubly linked list.
 * The time complexity of all the deque operations using a doubly linked list can be achieced O(1)
 * @version Copyright © 2017-11-09 All rights reserved. Langara College
 * @see http://www.cplusplus.com/reference/deque/deque/ for more information
 * dequeue is O(n) : all the remaining elements have to be shifted
 */

#ifndef Deque_h
#define Deque_h
#include <iostream>
#include <stdexcept>
using namespace std;

// Each node in a doubly linked list trading memory for time
class Node {

public:
    int data;
    Node* next;
    Node* prev;
};

// Double ended queue
class Deque {

private:
    int count;
    Node* front;
    Node* rear;
    
public:
    
    /**
     No-arg constructor assuming that for an empty Queue, both front and rear will be NULL
     */
    Deque();
    
    /**
     Insert an element in the front of the queue
     */
    void InsertFront(int element);
    
    /**
     Deletes the front element of the queue
     */
    int RemoveFront() throw (runtime_error);
    
    /**
     Inserts a new element at the rear of the queue
     @param element the actual element we want insert on queue
     */
    void InsertBack(int element);
    
    /**
     Deletes an element from the back of the queue
     @return ret the data allocated at the rear of the queue
     */
    int RemoveBack() throw (runtime_error);
    
    /**
     Returns the front element of the queue
     @return the front element of the queue
     */
    int Front() throw (runtime_error);
    
    /**
     Returns the front element of the queue
     @return the element at the back of the queue
     */
    int Back() throw (runtime_error);
    
    /**
     Returns the size of the queue
     @return the size of the queue
     */
    int Size();
    
    /**
     Checks if the queue is empty
     @return true if the queue is empty
     @return false if at least 1 element is contained
     */
    bool isEmpty();
};

#endif /* Deque_h */

