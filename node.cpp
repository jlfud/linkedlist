#include <iostream>
#include <cstring>
#include "student.h"
#include "node.h"

using namespace std;

node::node(student* newstudent, node* newnode){
  student = newstudent;
  linkNode = newnode;
}
node::~node(){
  delete &student;
  //rest of delete function
  //maybe if/else, set new next? 
}
