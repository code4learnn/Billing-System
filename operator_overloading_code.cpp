#include <iostream>
using namespace std;
#include "operator_overloading.cpp"

int main(){
   fraction f1 (10,5);
   fraction f2 (15,4);
   fraction f3 = f1.add(f2);
   fraction f4 = f1 +f2;
   f1.print ();
   f2.print ();
   f3.print();
   f4.print();
   fraction f6 = f1*f2;
   f6.print(); 

   if (f1== f2){
    cout << "EQUAL"<<endl;
   }else {
    cout << "NOT EQUAL"<<endl;
   }
} 

