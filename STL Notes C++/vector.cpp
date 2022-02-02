#include<bits/stdc++.h>

using namespace std;


void printvec(vector<int> v)
{
  cout<<"size: "<<v.size()<<endl; // returns size of vector currently 
  for (int i = 0; i < v.size(); i++) // we use v.size() no need to pass n like we used to do in arrays
  {
    //v.size()-> O(1) time complexity
    cout<<v[i]<<" ";

  }
  cout<<endl;
}

void printvec1(vector<int> &v1) // if i want a copy to be made use v1 else use &v1
{
  cout<<"size: "<<v1.size()<<endl; // returns size of vector currently 
  for (int i = 0; i < v1.size(); i++) // we use v.size() no need to pass n like we used to do in arrays
  {
    //v.size()-> O(1) time complexity
    cout<<v1[i]<<" ";

  }
  cout<<endl;
  
}

int main()
{

vector<int> v;
// Vector is kinda of array bas uska size change ho sakta hai
// Currently size of vector is 0



int n;
cin>>n;

for (int i = 0; i < n; i++)
{
  int x;
  cin>>x;
  printvec(v);
  v.push_back(x); // Time Complexity -> O(1)

}

printvec(v);

vector<int> v1(3,3); // make a vector of 10 elemenet with all elemener=3
v1.push_back(99); // adds 99 in the end of vector v1
v1.pop_back(); // removes 99 from vector v1

printvec1(v1); // O(1)

vector<int> v2=v1; // O(n) and v2 is v's copy 
// that is if we make changes in v2 , v wont be affeceted
// v2 bana v1 ki copy ie having 3 3 3 already then we pushed 222 in the end 

v2.push_back(222);
printvec(v2);






}