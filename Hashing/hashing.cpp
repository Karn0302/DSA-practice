#include<iostream>
#include<vector>
#include<list>
#include<algorithm> //required for std::find
using namespace std;

class Hashing{
    vector<list<int> > hashtable;
    int buckets;
public:
    Hashing(int size)//constructor
    {
        buckets=size;
        hashtable.resize(size);

    }

    int hashvalue(int key){
        return key%buckets;//division method for hashing
    }

    void addkey(int key)
    {
        int idx=hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator searchkey(int key)
    {
        int idx= hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }

    void deletekey(int key){
        
        int idx = hashvalue(key);
        if(searchkey(key)!=hashtable[idx].end())
        {//key is present
        hashtable[idx].erase(searchkey(key));
        cout<<key<<" is deleted"<<endl;

        }
        else{
            cout<<"key is not present in the hashtable"<<endl;
        }
}
};

int main()
{
    Hashing h(10);

    h.addkey(5);
    h.addkey(9);
    h.addkey(3);

    h.deletekey(3);
    h.deletekey(3);

}