#include<iostream>
using namespace std;

class Parent1{
    public:
        Parent1(){
            cout<<"Parent1 class"<<endl;
        }
};



class Child1: public Parent1{
public:
    Child1(){
        cout<<"Child1 class"<<endl;
    }
};

class Child2: public Parent1{
    public:
        Child2(){
            cout<<"Child2 class"<<endl;
        }
};

int main(){
    cout<<"Child 1 calling Parent1"<<endl;
    Child1 c;
    cout<<"Child2 calling Parent1"<<endl;
    Child2 d;
    return 0;
}