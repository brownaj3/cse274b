//============================================================================
// Name        : Test.cpp
// Author      : Drew Brown
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ArrayDeque.h"
#include "BinaryTree.h"
#include "BinarySearchTree.h"
#include "utils.h"
#include "array.h"
using namespace std;
using namespace ods;

void testPartOne() {
    BinarySearchTree<BSTNode1<int>, int> test;
    test.add(55);
    test.add(60);
    test.add(50);

    cout << "testing my height2 method" << endl;
    cout << "height() answer: " << test.height() << endl;
    cout << "height2() answer: " << test.height2() << endl;
    test.add(0);
    test.add(100);
    cout << "height() answer: " << test.height() << endl;
    cout << "height2() answer: " << test.height2() << endl;
}

void testPartTwo() {
    BinarySearchTree<BSTNode1<int>, int> test;

    test.add(55);
    test.add(50);
    test.add(60);

    cout << "testing my isBalanced method" << endl;
    cout << "expected answer is 1... " << test.isBalanced() << endl;

    test.add(100);

    cout << "expected answer is 1... " << test.isBalanced() << endl;

    test.add(5);

    cout << "expected answer is 1... " << test.isBalanced() << endl;

    test.add(0);

    cout << "expected answer is 0... " << test.isBalanced() << endl;
}

void testPartThree() {
    BinarySearchTree<BSTNode1<int>, int> test;

    cout << "testing my pre/post/inOrderNumber methods" << endl;

    test.add(55);
    test.add(50);
    test.add(60);

    test.preOrderNumber();
    test.postOrderNumber();
    test.inOrderNumber();

    test.printAll();
}

void testPartFour() {
    BinarySearchTree<BSTNode1<int>, int> test;

    test.add(55);
    test.add(40);
    test.add(30);
    test.add(33);
    test.add(603330);
    test.add(560);
    test.add(65);
    test.add(0);
    test.add(1885);
    test.add(100);
    test.add(20);
    test.add(7);

    cout << "testing my getLE method" << endl;
    DLList<int> *list = test.getLE(60);
    for (int i = 0; i < list->size(); i++) {
        cout << list->get(i) << " ";
    }
    delete list;
}

int main() {
    testPartOne();
    cout << endl;
    testPartTwo();
    cout << endl;
    testPartThree();
    cout << endl;
    testPartFour();
    return 0;
}

