//NULL pointer
#include<iostream>
using namespace std;

int main()
{
   int* ptr = NULL;   
   cout<<ptr<<"\n"; 
//    cout<<(*ptr); //dereferencing a null pointer
//above line-> this throws segmentation fault or any other error depending on the system environment ,program will terminate due to this 
   int* p1=0;
   int* p2='\0';
   cout<<p1<<" "<<p2<<" "<<"\n";
   return 0;
}