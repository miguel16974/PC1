#include <iostream>
#include "linkedlist.h"
#include "type.h"

using namespace std;
const int nElem=5;
int main() {
  TX sum=0;//
  TX vect[nElem]={1,2,3,4,5};
  LinkedList<TX> mylist;
  for(auto x=0; x<nElem; x++)
  {   
    mylist.insert_at_tail(vect[x]);
    sum=sum+vect[x];//
  }

 cout<< "" <<endl;
 cout<<"la suma es "<<sum<<endl; 
}
