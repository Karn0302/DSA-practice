//DANGLING POINTER
#include<iostream>
using namespace std;

int main()
{
    int* ptr = NULL;
    /*block start*/{
        int x=10;
        ptr=&x;
    }/*block ends*/
    // ptr is made to point to a local variable x.
    // The variable x exists only inside the inner { } block.
    // Once the block ends, x is destroyed (memory is released).
    // But ptr still holds the old address of x.This makes ptr a dangling pointer — it points to memory that is no longer valid.
    cout<<ptr;
    cout<<*ptr;
    return 0;
}