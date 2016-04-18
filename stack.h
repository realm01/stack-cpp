/*
* Created by: Anastassios Martakos
*
* Copyright 2016 Anastassios Martakos
*
* This program is free software: you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*/

#ifndef __STACK_H
#define __STACK_H

template <typename T>
class Stack {
  private:
    class Node {
      friend class Stack;
      private:
        T item;
        Node* next_item;

      public:
        Node(const T& value);
    };
    Node* first;
    int size;

  public:
    Stack(void);
    void push(const T& item);
    T pop(void);
    T top(void);
    bool isEmpty(void);
    int getSize(void);
};

#include "stack.cpp"

#endif
