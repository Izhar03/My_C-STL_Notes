#include<bits/stdc++.h>

using namespace std;

// Unordered Maps using Hash Tables in Implementation 
// Unlike red black Trees in Maps 
// Differences

//1. inbuilt implementation
//2.Time complexity 
//3.Valid keys datatype { like using pair<int,int> complex data types will give compilation error }
// any data type whose hash function is not defined cannot be passes as a parameter in unodered maps 

void print(unordered_map<int,string> &m)
{
  cout<<m.size()<<endl;

  for( auto &pr : m)
  {
    cout<<pr.first<<" "<<pr.second<<endl;
  }

}

int main()
{

unordered_map<int,string> m;
m[1]="a"; // O(1) insertion and access average time complexity
m[2]="b";
m[3]="c";
m[4]="d";
m[5]="e";

print(m);

}

// multimap is same as maps also uses RBT in implementation bas 
// yahan pe duplicate values bhi le sakte hain in maps , every key is unique







