#include<iostream>
using namespace std;
#include<cstring>
#include "student.cpp"

int main(){
    char name[]= "abcd" ;
    student s1(20,name);
    s1.display();

    name[3]= 'e';
    student s2(32,name);
    s2.display();
    cout <<" going to dispalay again"<<endl;
    s1.display();

    student s4 (s1);
   
   s4.display();
 }

