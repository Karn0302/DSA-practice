#include<iostream>
using namespace std;
int main()
{
    int x=18;
    float y=7.9;
    //create a pointer that can store address of x;
    //as x is an integer variable, so we need a pointer
    //that can store address of integer type
    int *ptr;
    ptr=&x;
    cout<<"address stored inside ptr:"<<ptr<<"\n";
    cout<<"value present at the address stored in ptr:"<<*ptr<<"\n";//dereference 

    //create a pointer that can store of address of y
    //y is a float variable, so we need to store it in a
    //float pointer
    float *pt = &y;
    cout<<"address stored inside pt:"<<pt<<"\n";
    cout<<"value present at the address stored in ptr:"<<*pt<<"\n";
    return 0;
}