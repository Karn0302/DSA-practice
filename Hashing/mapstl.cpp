#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int>directory;

    directory["naman"]=3876;
    directory["animesh"]=7425;
    directory["ritu"]=2654;

    for(auto element:directory)
    {
        cout<<"Name-"<<element.first<<endl;
        cout<<"phone no-"<<element.second<<endl;
    }//the by default the output will be in ascending order wrt name key

    //for descening order 
    //declare the map this way:
    //map<string,int,greater<string>>directory;

    //updating any existing key's value
    directory["ritu"]=12345;//this will update value of key->ritu
    cout<<endl;
    for(auto element:directory)
    {
        cout<<"Name-"<<element.first<<endl;
        cout<<"phone no-"<<element.second<<endl;
    }

    //trying to enter duplicate key :
    directory.insert(make_pair("ritu",5423));//this won't get inserted as key (ritu) is already in our map
    cout<<endl;
    for(auto element:directory)
    {
        cout<<"Name-"<<element.first<<endl;
        cout<<"phone no-"<<element.second<<endl;
    }
    cout<<endl;
    //accessing our map using iterator
    map<string,int>::iterator itr;
    for(itr=directory.begin();itr!=directory.end();itr++)
    {
        cout<<itr->first<<"- "<<itr->second<<endl;
    }
    cout<<endl;

    //accessing in reverse direction
    map<string,int>::reverse_iterator itr_rev;
    for(itr_rev=directory.rbegin();itr_rev!=directory.rend();itr_rev++)
    {
        cout<<itr_rev->first<<"- "<<itr_rev->second<<endl;
    }


    

    return 0;

}