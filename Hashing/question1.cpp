// sum of repetitive elements:

// you are given an integer n,reprsenting the number of elements.then you will be given n 
// elements. you have to return the sum of repetitive elements i.e the elements that appear more 
// than one time.

// input 
// n=7
// elements=[1,1,2,1,3,3,3]

// output:4 
// explanation: the repetitive elements are 1,3 and the sum is 4

#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> input(n);

    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }

    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        //storing frequency of every element in input array
        m[input[i]]++;
    }

    int sum=0;
    //finding sum of repetitive elements
    //pair-element,frequemcy
    for(auto pair:m)
    {
        if(pair.second>1){//element is repettive
        sum+=pair.first;
        cout<<pair.first<<" is a repetitive element"<<endl;
        }
    }

    cout<<"sum of repetitive elments is:"<<sum<<endl;




}