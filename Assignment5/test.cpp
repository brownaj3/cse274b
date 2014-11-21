//============================================================================
// Name        : hw5.cpp
// Author      : Pierre
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ChainedHashTable.h"
#include "DataStructureTester.h"
#include "LinearHashTable.h"
#include "BinarySearchTree.h"
#include "RedBlackTree.h"

using namespace std;
using namespace ods;

//for sequential
DataStructureTester<ChainedHashTable<int> > chtTest;
DataStructureTester<LinearHashTable<int> > lhtTest;
DataStructureTester<BinarySearchTree<BSTNode1<int>, int> > bstTest;
DataStructureTester<RedBlackTree<RedBlackNode1<int>, int> > rbtTest;

//for random
DataStructureTester<ChainedHashTable<int> > chtTest2;
DataStructureTester<LinearHashTable<int> > lhtTest2;
DataStructureTester<BinarySearchTree<BSTNode1<int>, int> > bstTest2;
DataStructureTester<RedBlackTree<RedBlackNode1<int>, int> > rbtTest2;

void testChainedHashTable(){
  int SATime=0;
  int RATime=0;
  int SFTime=0;
  int RFTime=0;
  int SRTime=0;
  int RRTime=0;
  cout<<"ChainedHashTable Average Times"<<endl;
  for (int i=0;i<20;i++){
    SATime+=chtTest.DoSequentialAdd(1,50000,1);
    RATime+=chtTest2.DoRandomAdd(50000);
    SFTime+=chtTest.DoSequentialFind(1,50000,1);
    RFTime+=chtTest2.DoRandomFind(50000);
    SRTime+=chtTest.DoSequentialRemove(1,50000,1);
    RRTime+=chtTest2.DoRandomRemove(50000);
  }
  SATime/=20;
  RATime/=20;
  SFTime/=20;
  RFTime/=20;
  SRTime/=20;
  RRTime/=20;
  cout<<"Average Sequential Add Time: " << SATime << "ms" <<endl;
  cout<<"Average Random Add Time: " << RATime << "ms" << endl;
  cout<<"Average Sequential Find Time: " << SFTime << "ms" << endl;
  cout<<"Average Random Find Time: " << RFTime << "ms" << endl;
  cout<<"Average Sequential Remove Time: " << SRTime << "ms" << endl;
  cout<<"Average Random Remove Time: " << RRTime << "ms" << endl;
}

void testLinearHashTable(){
  int SATime=0;
  int RATime=0;
  int SFTime=0;
  int RFTime=0;
  int SRTime=0;
  int RRTime=0;
  cout<<"LinearHashTable Average Times"<<endl;
  for (int i=0;i<20;i++){
    SATime+=lhtTest.DoSequentialAdd(1,50000,1);
    RATime+=lhtTest2.DoRandomAdd(50000);
    SFTime+=lhtTest.DoSequentialFind(1,50000,1);
    RFTime+=lhtTest2.DoRandomFind(50000);
    SRTime+=lhtTest.DoSequentialRemove(1,50000,1);
    RRTime+=lhtTest2.DoRandomRemove(50000);
  }
  SATime/=20;
  RATime/=20;
  SFTime/=20;
  RFTime/=20;
  SRTime/=20;
  RRTime/=20;
  cout<<"Average Sequential Add Time: " << SATime << "ms" <<endl;
  cout<<"Average Random Add Time: " << RATime << "ms" << endl;
  cout<<"Average Sequential Find Time: " << SFTime << "ms" << endl;
  cout<<"Average Random Find Time: " << RFTime << "ms" << endl;
  cout<<"Average Sequential Remove Time: " << SRTime << "ms" << endl;
  cout<<"Average Random Remove Time: " << RRTime << "ms" << endl;
}

void testBinarySearchTree(){
  int SATime=0;
  int RATime=0;
  int SFTime=0;
  int RFTime=0;
  int SRTime=0;
  int RRTime=0;
  cout<<"BinarySearchTree Average Times"<<endl;
  for (int i=0;i<20;i++){
    SATime+=bstTest.DoSequentialAdd(1,50000,1);
    RATime+=bstTest2.DoRandomAdd(50000);
    SFTime+=bstTest.DoSequentialFind(1,50000,1);
    RFTime+=bstTest2.DoRandomFind(50000);
    SRTime+=bstTest.DoSequentialRemove(1,50000,1);
    RRTime+=bstTest2.DoRandomRemove(50000);
  }
  SATime/=20;
  RATime/=20;
  SFTime/=20;
  RFTime/=20;
  SRTime/=20;
  RRTime/=20;
  cout<<"Average Sequential Add Time: " << SATime << "ms" <<endl;
  cout<<"Average Random Add Time: " << RATime << "ms" << endl;
  cout<<"Average Sequential Find Time: " << SFTime << "ms" << endl;
  cout<<"Average Random Find Time: " << RFTime << "ms" << endl;
  cout<<"Average Sequential Remove Time: " << SRTime << "ms" << endl;
  cout<<"Average Random Remove Time: " << RRTime << "ms" << endl;
}

void testRedBlackTree(){
  int SATime=0;
  int RATime=0;
  int SFTime=0;
  int RFTime=0;
  int SRTime=0;
  int RRTime=0;
  cout<<"RedBlackTree Average Times"<<endl;
  for (int i=0;i<20;i++){
    SATime+=rbtTest.DoSequentialAdd(1,50000,1);
    RATime+=rbtTest2.DoRandomAdd(50000);
    SFTime+=rbtTest.DoSequentialFind(1,50000,1);
    RFTime+=rbtTest2.DoRandomFind(50000);
    SRTime+=rbtTest.DoSequentialRemove(1,50000,1);
    RRTime+=rbtTest2.DoRandomRemove(50000);
  }
  SATime/=20;
  RATime/=20;
  SFTime/=20;
  RFTime/=20;
  SRTime/=20;
  RRTime/=20;
  cout<<"Average Sequential Add Time: " << SATime << "ms" <<endl;
  cout<<"Average Random Add Time: " << RATime << "ms" << endl;
  cout<<"Average Sequential Find Time: " << SFTime << "ms" << endl;
  cout<<"Average Random Find Time: " << RFTime << "ms" << endl;
  cout<<"Average Sequential Remove Time: " << SRTime << "ms" << endl;
  cout<<"Average Random Remove Time: " << RRTime << "ms" << endl;
}

int main() {
  testChainedHashTable();
  cout << endl;
  testLinearHashTable();
  cout << endl;
  testBinarySearchTree();
  cout << endl;
  testRedBlackTree();
  return 0;
}
