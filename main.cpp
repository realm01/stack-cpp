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

#include <iostream>
#include "stack.h"

using namespace std;

int main() {
  Stack<int> st;

  st.push(1);

    cout << st.top() << endl;

  st.push(3);

  cout << st.top() << endl;

  st.push(7);
  st.push(9);

  cout << st.pop() << endl;
  cout << st.top() << endl;
  cout << st.getSize() << endl;

  return 0;
}
