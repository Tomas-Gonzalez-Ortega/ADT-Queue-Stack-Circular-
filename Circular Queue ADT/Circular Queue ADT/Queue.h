/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07 Queue ADT PART 2 A
 * Description: Header file for a Queue ADT as a contiguous structure
 * NOTE: Based on materials provided during class
 * @version Copyright © 2017-11-09 All rights reserved. Langara College
 */

#ifndef Queue_h
#define Queue_h
#include <iostream>
#include <stdexcept>
#define CAPACITY 101  // Array maximum storage capacity
using namespace std;

class Queue {
    
private:
    int Array[CAPACITY];
    int front, rear;
    
public:
    
    /**
     No-arg constructor assuming that for an empty Queue, both front and rear will be -1
     */
    Queue();
    
    /**
     Inserts a new element at the rear of the queue
     @param element the actual element we want insert on queue
     */
    void insertBack(int element) throw (runtime_error);
    
    /**
     Deletes an element from the front of the queue
     */
    void removeFront() throw (runtime_error);
    
    /**
     Checks if the queue is empty comparing front and rear to -1
     @return true if the queue is empty
     @return false if at least 1 element is contained
     */
    bool isEmpty();
    
    /**
     Checks if the queue is full
     @return true if ths queue is full
     @return false if not
     */
    bool isFull();
    
    /**
     Returns the front element
     @return the front element
     */
    int Front();
    
    /**
     Prints the elements in queue from front to rear
     */
    void queuePrinter();
};

#endif /* Queue_h */
