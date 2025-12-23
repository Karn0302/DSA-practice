#include<iostream>
using namespace std;
int main()
{
    int x=18;
    //create a pointer that can store address of x;
    //as x is an integer variable, so we need a pointer
    //that can store address of integer type
    int *ptr;
    ptr=&x;
    cout<<"address stored inside ptr:"<<ptr<<"\n";
    cout<<"value present at the address stored in ptr:"<<*ptr<<"\n";//dereference

    //---------
  x=23;//the bucket x is updated from value 18 -> 23
  //but ptr is still pointing to same bucket
  //now if we dereference ptr, we will get 23
  
  cout<<"new updated value of x:"<<x<<"\n";
  cout<<"ptr still pointing to same memory which has 23 instead of 18 address being:"<<ptr<<" value being: "<<*ptr<<"\n";

  //----------
    //updating x using pointer
    *ptr=50;
    cout<<"new value of x "<<x<<"\n";
    cout<<"new value pointed by ptr "<<*ptr;
   
  
  return 0;
}