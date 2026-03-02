#include<iostream>
using namespace std;
//declaring a class
// class class_name{
//     int data1;
//     int data2;
// };

class Fruit{
public: //to access the properties (by default the properties are private so we need to make them public to access)
    string name;
    string color;
};

int main(){
    Fruit apple; //object
    //accesing done through ("dot-> . operator")
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<"-"<<apple.color<<endl;

    //another way to create an object using the new keyword

    Fruit *mango = new Fruit();
    //accessing the properties will be done through ("->" arrow operator) because mango is a pointer 
    mango->name="Mango";
    mango->color="yellow";
    cout<<mango->name<<"-"<<mango->color<<endl;
}