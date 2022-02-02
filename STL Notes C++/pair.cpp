#include<bits/stdc++.h>

using namespace std;

int main()
{

//----------------------------------------------------------------------------

pair<int,string> p;

p=make_pair(22,"stl"); //method 1

p = {2,"new way"}; //method 2

pair<int,string> &p1=p; // method 3
// since pair function are sent as copies so we use & for reference
p1.first=3;
p1.second="acv";

cout<<p.first<<" "<<p.second<<endl;

int a[]={1,2,3};
int b[]={2,3,4};

pair<int,int> p_array[3];

p_array[0]={1,2};
p_array[1]={2,3};
p_array[2]={3,4};
// Building Relations between them that what pair do 

swap(p_array[0],p_array[2]);

for ( int i=0;i<3;i++)
{

  cout<<p_array[i].first<<" "<<p_array[i].second<<endl;

}

//-------------------------------------------------------------------





}