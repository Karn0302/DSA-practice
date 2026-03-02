#include<iostream>
using namespace std;

class operator_overload{
    public:
        int a;

        operator_overload(int x){
            a= x;
        }
        operator_overload operator - (operator_overload &c){
            operator_overload ans(0);
            ans.a= this->a - c.a;
            return ans;
        }
};

int main(){
    operator_overload c1(2);
    operator_overload c2(5);
//  
    operator_overload c3=c1-c2;
    cout<<c3.a<<endl;
    return 0;
}