/**
 * @author Name: Tomas Gonzalez ID: 100266942.
 * CPSC 1160 Assignment #7 lab07 The Stack ADT PART 1 D
 * Description: Use your Stack ADT to write a program that reads a parenthesised expression from the keyboard, and checks if all the parentheses are balanced, and prints an appropriate message on the screen
 * @version Copyright © 2017-11-09 All rights reserved. Langara College
 */
#include<iostream>
#include"Stack.h"
#include<string>
using namespace std;

/**
 function to check if paranthesis are balanced
 @param text is the expression to be analyzed
 @return true if the stack is completely empty
 @return false if there is at least 1 element in the stack
 */
bool bracketsBalance(char text[]) {
    Stack<char> Stack;
    char x, y, z;
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == '(' || text[i] == '[' || text[i] == '{') {
            Stack.push(text[i]);
        } else {
            switch (text[i]) {
                case ')': // Store x as top element
                    x = Stack.getTop();
                    Stack.pop();
                    if (x == '{' || x == '[')
                        cout << "Paranthesis, braces or brackets not balanced";
                    break;
                case '}': // Store y as top element
                    y = Stack.getTop();
                    Stack.pop();
                    if (y == '(' || y == '[')
                        cout << "Paranthesis, braces or brackets not balanced";
                    break;
                case ']': // Store z as top element
                    z = Stack.getTop();
                    Stack.pop();
                    if (z == '(' || z == '{')
                        cout << "Paranthesis, braces or brackets not balanced";
                    break;
            }
        }
    }
    return Stack.isEmpty();
}
