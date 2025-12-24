//void pointers
#include<iostream>
using namespace std;

int main()
{
    char c='a';
    int x=10;
    // int* ptr=&f; error: cannot convert 'float*' to 'int*' in initialization int* ptr=&f;
    //we can make it a void pointer to store address of different data type (bucket)
    void* ptr=&c;
    //it is reusable we can also use it for x:-
    ptr=&x;//this is valid
    //the only thing is that directly a void pointer cannot be dereferenced 
    // cout<<*ptr; //error
    //accessing  can be done through typecasting
    int* integerPointer = (int *)ptr;
    cout<<*integerPointer<<"\n";//will print 10 as ptr now has address of integer x
    ptr=&c;//ptr now has address of char c, only after this statement the below 2 lines of code would give the correct value
    char* char_pointer = (char*)ptr;
    cout<<*char_pointer<<"\n";
    return 0;
}