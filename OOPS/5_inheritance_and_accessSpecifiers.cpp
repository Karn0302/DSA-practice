#include<iostream>
using namespace std;

class Parent{

    public: 
        int x;

    protected:
        int y;
    private:
        int z;
};

class Child1: public Parent{//a type of inheritance mode 
    //x will remain public 
    //y will remain protected 
    //z will not be accessible
};

class Child2: private Parent{//a type of inheritance mode
    //x will be private 
    //y will be private 
    //z will remain inaccessible
};

class child3: protected Parent{//a type of inheritance mode
    //x will be protected 
    //y will be protected 
    //z will be inaccessible 
};

int main(){

    Parent p;
    p.x=10;//accessible because x is public 
    cout<<p.x<<endl;

    // p.y=15; //error (protected → not accessible outside class)
    // cout<<p.y<<endl;

    // p.z=20; //error (private → not accessible outside class)
    // cout<<p.z<<endl;

    return 0;
}