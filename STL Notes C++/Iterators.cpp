#include<bits/stdc++.h>

using namespace std;

int main()
{

vector<int> v={2,3,5,6,7};

for( int i=0;i<v.size();i++)
{
  cout<<v[i]<<" ";

}

cout<<endl;

vector<int> ::iterator it= v.begin(); // SYNATX FOR Iterator
// We initialized the it to v.begin()
// Iterator is like pointer 
// Iterator can be used to iterate through container
// it=v.end() will point at v[n+1] pos if v has n element that is outside



cout<<(*(it+1))<<endl; // prints 2nd pos ie 3

for(it=v.begin();it!=v.end();++it)
{
  cout<<(*it)<<endl;
}

// Difference between it+1 and it++ ??
//1. it+1 lets us move to " next position "
//2. it++ lets us move to " next iterator "
//3. Examples in vector it+1 and it++ both are same 
// as next pos and next iterator is same place since its continous memory allocation
// Example maps or sets in STL where the next pos may not be next iterator due to graph like nature so it+1 becomes invalid in map STL
// " Next iterator " means next possible location or next possible place of location 

vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
vector<pair<int,int>> :: iterator it1;

for(it1=v_p.begin();it1!=v_p.end();++it1)
{
  cout<<(*it1).first<<" "<<(*it1).second<<endl;
  cout<<(it1->first)<<" "<<(it1->second)<<endl; // SAME AS ABOVE SYNTAX

}

//---------RANGE BASED LOOPS AND AUTO C++11-----------------------------------------------------------------------------------

for(int &value : v){ // Now will recieve actual values due to &
  value++;
  cout<<value<<" ";
}
cout<<endl;

for(int value : v){
  cout<<value<<" ";
}
cout<<endl;

auto a=1.0;
cout<<a<<endl;

// Now use this in pair 

vector<pair<int,int>> v_q={{1,2},{2,3}};
for( auto&value : v_q){
  cout<<value.first<<" "<<value.second<<endl;
}



}