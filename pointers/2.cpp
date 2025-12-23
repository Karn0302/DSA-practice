#include<iostream>
using namespace std;
int main()
{
    int x=18;
    float y=7.9;
    //create a pointer that can store address of x;
    //as x is an integer variable, so we need a pointer
    //that can store address of integer type
    int *ptr=&x;
    cout<<ptr<<"\n";

    //create a pointer that can store of address of y
    //y is a float variable, so we need to store it in a
    //float pointer
    float *pt = &y;
    cout<<pt;
    return 0;
}