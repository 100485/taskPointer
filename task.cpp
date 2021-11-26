#include <iostream>
using namespace std;

int main(){

   double number1 = 7.3;
   double number2;
   double *ptr;

   ptr=&number1;

   cout<< "The value of the Pointer is:"<<ptr<<endl;

   number2=*ptr;
 cout<< "The value of number1 is:" <<&number1<<endl;
 cout<< "The value of ptr is:" <<ptr<<endl;
    return 0;

}