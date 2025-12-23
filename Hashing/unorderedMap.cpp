#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int,string> record;
    //roll no, name

    record.insert(make_pair(3,"Riya"));
    record[1]="rajiv";
    record[2]="animesh";

    for(auto pair:record)
    {
        cout<<"roll no- "<<pair.first<<" Name -"<<pair.second<<endl;
        
    }
    return 0;
}