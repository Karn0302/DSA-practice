#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<string,int> directory;

    directory.insert(make_pair("urvi",624531));
    directory.insert(make_pair("raju",9000031));
    directory.insert(make_pair("raju",9000031));
    directory.insert(make_pair("abhishek",342331));
    //directory["ABC"]=1234 //this type of insertion can't be done []operator is not allowed 

    for(auto pair:directory)
    {
        cout<<"Name - "<<pair.first<<" phone no.-"<<pair.second<<endl;
    }

    cout<<directory.count("raju");

}