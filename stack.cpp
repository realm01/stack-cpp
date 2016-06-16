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

template <typename T>
Stack<T>::Stack(void) {
  size = 0;
}

template <typename T>
Stack<T>::~Stack(void) {
  if(first != NULL)
    delete first;
}

template <typename T>
void Stack<T>::push(const T& item) {
  Node* curr_first = first;
  first = new Node(item);
  first->next_item = curr_first;

  size++;
}

template <typename T>
T Stack<T>::pop(void) {
  if(size == 0)
    throw "Out of Bound";

  T value = first->item;
  first = first->next_item;

  size--;

  return value;
}

template <typename T>
T Stack<T>::top(void) {
  if(size == 0)
    throw "Out of Bound";

  return first->item;
}

template <typename T>
bool Stack<T>::isEmpty(void) {
  if(size == 0)
    return true;
  else
    return false;
}

template <typename T>
int Stack<T>::getSize(void) {
  return size;
}

template <typename T>
Stack<T>::Node::Node(const T& value) {
  item = value;
}

template <typename T>
Stack<T>::Node::~Node(void) {
  if(next_item != NULL)
    delete next_item;
}
