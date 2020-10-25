#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>
#include "student.h"

using namespace std;

class node{
public:
  node(student*, node*);
  ~node();
  student* student;
  node* linkNode; 
};

#endif
