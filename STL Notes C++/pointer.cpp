#include<bits/stdc++.h>

using namespace std;

int main()
{

//------------------------------------Pointer BASIC------------------------------------------------------------------------------
int x=4;
int *p_x=&x; // declaration of pointer p_x with address of x 
//stores address of x in the pointer named p_x , 
//pointer are used to adresses only
cout<<"Address x: "<<&x<<endl; // prints address of x , & gives address
cout<<"Address p_x: "<<&p_x<<endl; //address of p_x 
cout<<"Value in p_x: "<<p_x<<endl;  // since p_x stores address so prints address of x ie. &x
cout<<"Value at *p_x: "<<*p_x<<endl; // value at *p_x is the value stored in address of x ie. 4
*p_x=5; // manipulating x via *p_x 
cout<<"x: "<<x<<endl; // prints x 
cout<<"p_x + 2: "<<p_x+2<<endl; // pointer arthimatic
cout<<"value at p_x+2: "<<*(p_x+3)<<endl; // value at *p_x+2 should be GARBAGE VALUE since we dont know what lies there 
int **p_p_x=&p_x; // declaration of double pointer which stores address of another pointer
cout<<"Address p_x: "<<&p_x<<endl; // address of pointer p_x
cout<<"Value in p_p_x: "<<p_p_x<<endl; // value at double pointer is address of p_x 
cout<<"Value in *p_p_x: "<<*p_p_x<<endl; // value at p_p_x is addrress of x 
cout<<"Value at **p_p_x: "<<**p_p_x<<endl; 
// value at **p_p_x is value at x's address ie. value of x ie 5 IMP
**p_p_x=7; //manipulate x but indirectly
cout<<"x: "<<x<<endl;
cout<<endl<<endl<<endl;

//----------------------------------END BASIC POINTER------------------------------------------------------------


//----------------------------------ARRAY POINTER----------------------------------------------------------------------------


int a[10];
a[0]=2;
a[1]=4;
cout<<"a: "<<a<<endl; // a itself is a pointer NEW which is pointing to a[0] address
cout<<"&a[0]: "<<&a[0]<<endl; // printing a[0]'s address same as a ie &a[0]=a 
cout<<"*a: "<<*a<<endl; // value at a or a[0] is 2 
cout<<"a+1: "<<a+1<<endl; // array pointer arithmatic moves to next index by this method
cout<<"&a[1]:"<<&a[1]<<endl; //same as a+1 
cout<<"*(a+1): "<<*(a+1)<<endl; //value at a[1] ie 4 


//----------------------------------END ARRAY POINTER------------------------------------------------------------






}