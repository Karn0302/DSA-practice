//pair is a container (defined in <utility>) that can store two values — often of different data types — as a single unit.

// Think of it as a small box holding two items, like (x, y).

//Pairs

#include<bits/stdc++.h>
using namespace std;
void explainPair()
{
    pair<int, int> p = {1,3};

    cout<<p.first <<" "<<p.second<<endl;

    //nested pair

    pair<int, pair<int,int>> np={1,{3,4}};
    cout<< np.first<<" "<< np.second.second<<" "<<np.second.first<<endl;

    //pair ka array

    pair<int, int> arr[]={{1,2},{2,5},{5,1}};//indexing is 0 for{1,2}; 1 for{2,5}....
    cout<<arr[1].second;//will print 5
}

int main()
{
    explainPair();
    return 0;
}