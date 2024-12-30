// Topic: Scope of Variables, local / global / grabage collecter.
#include <iostream>
using namespace std;

// Global variables
int marks = 90;

int sum(int d, int e){
  int f = d + e; 
  return f; 
}

int main(){
  int d,e,f;
  cout<<"enter the value of d"<<endl;
  cin>>d;
  cout<<"enter the value of e"<<endl;
  cin>>e;
  f=sum( d, e);
  cout<<"sum of d & e is " << f<<endl;
  
  return 0;
}