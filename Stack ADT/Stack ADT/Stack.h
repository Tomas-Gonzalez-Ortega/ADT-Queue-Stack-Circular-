/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07 The Stack ADT
 * Description: implements the following class diagram plus some extra functions:
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

#ifndef Stack_h
#define Stack_h
#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

template<typename T = int>
class Stack {
    
private:
    
    T *elements;
    int top;
    int size; // the size of the amount of memory in which we're gonna store the whole stack
    int capacity;
    void ensureCapacity();
    
public:

    Stack();
    Stack(int size);
    T peek();
    void push(T newElement);
    T pop();
    T getTop() const;
    bool const isEmpty();
    bool const isFull();
    ~Stack();
};
    
/**
 No-arg constructor to create an empty Stack
 */
template<typename T>
Stack<T>::Stack() {
    int N = 10;
    elements = new T[N];
    top = -1; // this shows this isn't a valid index and shows the stack is Empty
}

/**
 Constructor for the Stack with a defined max capacity setting top as empty
 @param size the actual size of the buffer
*/
template<typename T>
Stack<T>::Stack(int size) {
    elements = new T[size];
    top = -1; // shows this isn't a valid index and shows the stack is Empty
}

/**
Returns the last element of the Stack
*/
template<typename T>
T Stack<T>::peek() {
    return elements[this->size - 1];
}

/**
 Inserts a new element in the stack as asked in PART 1-C
 @param newElement the actual element we want to push inside the stack
*/
template<typename T>
void Stack<T>::push(T newElement) {
    if(isFull()){
        ensureCapacity(); // For PART 1 A this line should be removed to be fixed size
    }
    elements[this->size++] = newElement;
}

/**
 Checks for the stack capacity and doubles the size if necessary coping the elements into a temporal pointer that way we don't jeopardize the data
 Allocate new dynamic memory with the new size and copies all the elements from the old list into a new list and delete the temporal adress pointer
*/
template<typename T>
void Stack<T>::ensureCapacity() {
    if (this->size >= capacity) {
    T *old = elements;
    capacity = 2 * this->size;
    elements = new T[this->size * 2];
    for (int i = 0; i < this->size; i++)
        elements[i] = old[i];
    delete [] old;
    }
}
    
/**
 Deletes an element from the stack
 @return the stack without the element removed
*/
template<typename T>
T Stack<T>::pop() {
    if (isEmpty())
        throw runtime_error("No elements in the stack");
    if(!isEmpty())
        return elements[--this->size];
    return NULL;
}

/**
 Gets the element present at top
 @return the actual element sit at top of the stack
*/
template<typename T>
T Stack<T>::getTop() const {
    return elements[top];
}
    
/**
 Checks if the Stack is empty comparing the size to -1
 @return true if ths stack is empty
 @return false if at least 1 element is contained
*/
template<typename T>
bool const Stack<T>::isEmpty() {
    return (this->size == -1);
}
    
/**
 Checks if the Stack is full
 @return true if ths stack is full
 @return false if the last element of the stack isn't top
*/
template<typename T>
bool const Stack<T>::isFull() {
    return (top == this->size - 1);
}

/**
 Destructor for the Stack
 */
template<typename T>
Stack<T>::~Stack() {
    delete [] elements;
}

#endif /* Stack_h */
