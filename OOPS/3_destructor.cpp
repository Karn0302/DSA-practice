#include<iostream>
using namespace std;

class Rectangle{
    public:
        int l;
        int b;

        Rectangle(){//default constructor - no arguments passed
            l=0;
            b=0;
        }

        Rectangle(int x, int y)//parameterized constructor- arguments passed 
        {
            l=x;
            b=y;
        }

        Rectangle(Rectangle& r)//copy constructor-initialize an obj by another existing object  
        {
            l=r.l;
            b=r.b;
        }

        ~Rectangle(){//destructor
            cout<<"Destructor is called"<<endl;

        }
};

int main()
{
    Rectangle* r1= new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1; //delete keyword used to call the destructor 


    Rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3 = r2; //copy constructor 
    cout<<r3.l<<" "<<r3.b<<endl;
    //if we are not using delete keyword then the destructor function is called in here three times and that to after the constructors do their part as the destructor inside the class is made at last 
    //if delete keyword is used to call the destructor after a constructor  then destructor will work before the other rest constructors 
    //delete keyword only works for pointer variable
    return 0;
}