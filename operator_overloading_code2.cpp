#include<iostream>
using namespace std;
#include "operator _overloading2.cpp"

int main(){
    fraction f1 (10,2);
    fraction f2(15,4);
    fraction f3 (12,15);
    (f1 += f2)+=f2 ;
   f2.print ();
   cout <<"print f1"<<endl;
   f1.print();
    /*fraction f4 = f1++;
    f4.print ();
    f1.print();
    /*fraction f4 = ++(++f3);
    f4.print();
    /*f1.print(); 
    ++f1;
    f1.print ();
    fraction f3 = ++f2;
    f3.print();
    fraction */
}