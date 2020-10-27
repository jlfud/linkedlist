#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

using namespace std;
int main(){
  student* firststud = new student("jason", 1, 4.0);
  node* first = new node(firststud, NULL);
  student* secondstud = new student("vatsal", 2, 1.2);
  student* thirdstud = new student("boy", 3, 3.5);
  node* third = new node(thirdstud, NULL);
  node* second = new node(secondstud, third);
  first->setNext(second);

  node* current = new node(NULL, NULL);
  current = first;
  while(true){
    
    cout << current->getStudent()->name << ", " << current->getStudent()->id << ", " << current->getStudent()->gpa << endl;
    if(current->getNext() != NULL){
      current = current->getNext();
    }
    else{
      break;
    }
  }
  return 0;
}
