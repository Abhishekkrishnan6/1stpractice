#include<iostream> 
using namespace std; 
class demo 
{ 
 public: 
 demo() 
 { 
 cout<<"first function constructor"<<endl; 
 } 
 ~demo() 
 { 
 cout<<"last function destructor"<<endl; 
 } 
}; 
int main() 
{ 
 demo obj; 
} 