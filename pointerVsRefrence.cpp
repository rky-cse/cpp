#include<bits/stdc++.h>
using namespace std;


int main(){

int a = 10;
int *p = &a; // pointer to a
int &r = a; // reference to a

cout << "Value of a: " << a << endl; // prints 10
cout << "Value of *p: " << *p << endl; // prints 10 (dereferencing pointer)
cout << "Value of r: " << r << endl; // prints 10 (reference to a)
cout << "Address of a: " << &a << endl; // prints address of a
cout << "Address of p: " << p << endl; // prints address of a (pointer to a)
cout << "Address of r: " << &r << endl; // prints address of a (reference to a)
cout<<"&p: " << &p << endl; // prints address of p (pointer to a)
cout << "Size of a: " << sizeof(a) << endl; // prints size of int (usually 4 bytes)
cout << "Size of p: " << sizeof(p) << endl; // prints size of pointer (usually 8 bytes on 64-bit system)
cout << "Size of r: " << sizeof(r) << endl; // prints size of int (usually 4 bytes)
cout << "Value of p: " << p << endl; // prints address of a (pointer to a)

cout<<"-------------------------------------------------------"<<endl;

int b= 20;
p = &b; // changing pointer to point to b

cout << "Value of a: " << a << endl; // prints 10 (still referring to a)
cout << "Value of *p: " << *p << endl; // prints 20 (dereferencing pointer to b)

cout<<"-------------------------------------------------------"<<endl;
r= b; // changing reference to refer to b

cout << "Value of a: " << a << endl; // prints 20 (reference to b)
cout << "Value of *p: " << *p << endl; // prints 20 (dereferencing pointer to b)
cout << "Value of r: " << r << endl; // prints 20 (reference to b)


cout<<"-------------------------------------------------------"<<endl;
int c= 30;
p = &c; // changing pointer to point to c
cout << "Value of a: " << a << endl; 
cout << "Value of *p: " << *p << endl; // prints 30 (dereferencing pointer to c)
*p= 40; // changing value of c through pointer
cout << "Value of c: " << c << endl; // prints 40 (value of c changed through pointer)
cout << "Value of *p: " << *p << endl; // prints 40 (dereferencing pointer to c)
cout << "Value of r: " << r << endl; // prints 20 (reference to b, not changed)
cout << "Value of a: " << a << endl; // prints 20 (reference to b, not changed)


return 0;}