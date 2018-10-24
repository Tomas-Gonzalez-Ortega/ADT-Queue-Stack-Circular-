/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07 The Stack ADT TESTER
 * Description: implements the tester for some of the following functions:
 Stack<T>
 -elements: T *
 -top: int
 +Stack()
 +Stack(size: int)
 +push(newElement: T) : void
 +pop() : T
 +top() : T const
 +isEmpty() : bool const
 +isFull() : bool const
 *NOTE: Based on materials provided during class
 * @version Copyright © 2017-11-09 All rights reserved. Langara College
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main() {
    // Create a stack of int values
    Stack<int> intStack;
    for (int i = 0; i < 10; i++)
        intStack.push(i);
    while (!intStack.isEmpty())
        cout << intStack.pop() << " ";
    cout << endl;
    // Create a stack of strings
    Stack<string> stringStack;
    stringStack.push("Naoko");
    stringStack.push("Karina");
    stringStack.push("Tarra");
    while (!stringStack.isEmpty())
        cout << stringStack.pop() << " ";
    cout << endl;
    return 0;
}
