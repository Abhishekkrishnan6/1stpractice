#include<iostream> 
using namespace std; 
class person 
{ 
 int age; 
 public: 
 person() 
 { 
 age=45; 
 } 
 person (int a) 
 { 
 a=28; 
 age=a; 
 } 
 int getage() 
 { 
 return age; 
 } 
}; 
int main() 
{ 
 person person1,person2(50); 
 cout<<"person 1 age = "<<person1.getage()<<endl; 
 cout<<"person 2 age = "<<person2.getage()<<endl; 
 return 0; 
}