/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07 Circular Queue ADT Tester
 * Description: Test the header and cpp files
 * @version Copyright © 2017-11-05 All rights reserved. Langara College
 */

#include "Queue.h"
#include <iostream>
#include <stdexcept>
using namespace std;

/**
 Tester
 */
int main() {
    Queue Queue;
    //Queue.removeFront(); //Remove this comment to see a run time error
    Queue.insertBack(1);
    Queue.queuePrinter();
    Queue.insertBack(2);
    Queue.queuePrinter();
    Queue.removeFront();
    Queue.queuePrinter();
    Queue.insertBack(3);
    Queue.queuePrinter();
    Queue.removeFront();
    Queue.queuePrinter();
    Queue.insertBack(1);
    Queue.queuePrinter();
    Queue.removeFront();
    Queue.queuePrinter();
    system("PAUSE");
    return 0;
}
