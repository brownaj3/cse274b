//============================================================================
// Name        : Assignment6.cpp
// Author      : Drew Brown
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BinaryHeap.h"
using namespace std;
using namespace ods;

int main() {
  BinaryHeap<int> test;
  for (int i=0; i<10; i++){
    test.add(i);
  }

  cout << "heap size: " << test.size() << endl;

  int x = test.remove(4);

  cout << "heap size after removing " << x << ": " << test.size() << endl;
	return 0;
}
