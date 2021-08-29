#include<iostream> 
using namespace std; 
class complex 
{ 
 private: 
 float a; 
 float b; 
 public: 
 complex(){} 
 complex(float real,float imag) 
 { 
 a=real; 
 b=imag; 
 } 
 complex operator+(complex); 
 void display(); 
}; 
complex complex::operator+(complex c) 
{ 
 complex sum; 
 sum.a=a+c.a; 
 sum.b=b+c.b; 
 return(sum); 
} 
void complex::display() 
{ 
 cout<<a<<" + i"<<b<<"\n"; 
} 
int main() 
{ 
 float n,m,o,p; 
 cout<<"your complex no.is in form of a+ib\n"; 
 cin>>n>>m>>o>>p; 
 complex c1(n,m); 
 complex c2(o,p);  complex c3; 
 c3=c1+c2; 
 c3=c1.operator+(c2); 
 cout<<"c1 ="; 
 c1.display(); 
 cout<<"c2="; 
 c2.display(); 
 cout<<"c3="; 
 c3.display(); 
 return 0; 
} 