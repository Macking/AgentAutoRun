#include "Stash2.h"
#include <fstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct A{
  int i[100];
};

struct B{
  void f();
};

main()
{
  //cout << "test" << endl;
  //vector<int> v;
  /*
  for(int i=0;i<10;i++)
    v.push_back(i);
  for(int j=0; j < v.size();j++)
    cout << v[j] << ", ";
  cout << endl;
  */
  //cout << "size of A: " << sizeof(A) << endl;
  //cout << "size of B: " << sizeof(B) << endl;
  cout << "*****************begin to int*****************" << endl;
  Stash intStash(sizeof(int));
  for(int i = 0;i < 100; i++)
    intStash.add(&i);
  for(int j = 0;j < intStash.count();j++)
    cout << "intStash.fetch(" << j << ") = " << *(int*)intStash.fetch(j) << endl;
  cout << "*****************being to str*****************" << endl;
  const int bufsize = 80;
  Stash stringStash(sizeof(char)*bufsize);
  ifstream in("Stash2Test.cpp");
  string line;
  while(getline(in,line))
    stringStash.add((char*)line.c_str());
  int k = 0;
  char* cp;
  while((cp = (char*)stringStash.fetch(k++))!=0)
    cout<< "stringStash.fetch(" << k << ") = " << cp << endl;
}
