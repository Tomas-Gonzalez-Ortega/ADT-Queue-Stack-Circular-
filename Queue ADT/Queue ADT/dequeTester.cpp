/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07  Deque ADT Tester
 * Description: Test the header and cpp files
 * @version Copyright © 2017-11-09 All rights reserved. Langara College
 */

#include "Deque.h"
#include <iostream>
#include <stdexcept>
using namespace std;

/**
 Tester
 */
int main() {
    // Stack behavior using a general dequeue
    Deque deque;
    try {
        if (deque.isEmpty())
            cout << "Deque is empty" << endl;
        
        // Push elements
        deque.InsertBack(1);
        deque.InsertBack(2);
        deque.InsertBack(3);
        
        // Size of queue
        cout << "Size of dequeue = " << deque.Size() << endl;
        
        // Pop elements
        cout << deque.RemoveBack() << endl;
        cout << deque.RemoveBack() << endl;
        cout << deque.RemoveBack() << endl;
    } catch (...) {
        cout << "exception occured" << endl;
    }
    
    // Queue behavior using a general dequeue
    Deque dequeQ;
    try {
        if (dequeQ.isEmpty())
            cout << "Deque is empty" << endl;
        
        // Push elements
        dequeQ.InsertBack(10);
        dequeQ.InsertBack(20);
        dequeQ.InsertBack(30);
        
        // Size of queue
        cout << "Size of dequeue = " << dequeQ.Size() << endl;
        
        // Pop elements
        cout << dequeQ.RemoveFront() << endl;
        cout << dequeQ.RemoveFront() << endl;
        cout << dequeQ.RemoveFront() << endl;
    } catch (...) {
        cout << "exception occured" << endl;
    }
    system("PAUSE");
    return 0;
}
