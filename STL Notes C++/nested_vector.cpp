#include<bits/stdc++.h>

using namespace std;


void printvec(vector<pair<int,int> > &v)
{
  cout<<"size: "<<v.size()<<endl; // returns size of vector currently 
  for (int i = 0; i < v.size(); i++) // we use v.size() no need to pass n like we used to do in arrays
  {
    //v.size()-> O(1) time complexity
    cout<<v[i].first<<" "<<v[i].second<<endl;

  }
  cout<<endl;
}

void printvec1(vector<int> v1)
{
  cout<<"size: "<<v1.size()<<endl; // returns size of vector currently 
  for (int i = 0; i < v1.size(); i++) // we use v1.size() no need to pass n like we used to do in arrays
  {
    //v1.size()-> O(1) time complexity
    cout<<v1[i]<<" ";

  }
  cout<<endl;
}

void printvec2(vector<int> v2)
{
  cout<<"size: "<<v2.size()<<endl; // returns size of vector currently 
  for (int i = 0; i < v2.size(); i++) // we use v2.size() no need to pass n like we used to do in arrays
  {
    //v2.size()-> O(1) time complexity
    cout<<v2[i]<<" ";

  }
  cout<<endl;
}

  int main()
{


vector<pair<int,int> > v = {{1,2},{2,3},{4,5}}; // Every elemenet of a vector ie an array
// has 2 values imagine v[0] has 2 values

 printvec(v);

 // how to take input in nested vector 
 int n;
 cin>>n;

 for ( int i=0;i<n;i++)
 {
   int x,y;
   cin>>x>>y;
   v.push_back({x,y});
 }

 printvec(v);

// ARRAY OF VECTOR 

// In Array of Vector it behaves like a 2D array bas it has 
// Fixed rows but variable column 


int N; // Number of vector
cin>>N;
vector <int> v1[N]; // we made 10 vectors v1[0] ek vector hai v[2] ek vector hai
for( int i=0;i<N;i++){
  int n;
  cin>>n; // elements inside v1[i] eg v1[0] mai if we want 3 elements then n=3
  for( int j=0;j<n;j++){ // to enter and fill eg v1[0] 
    int x;
    cin>>x;
    v1[i].push_back(x); // Eg v1[0] mai n element karne ke liye push_back

  }
}

//Priniting  vector of array

for(int i=0;i<N;i++)
{
  printvec1(v1[i]);
}


// VECTOR OF VECTOR : if we want rows and coloumn both dynamic unlike arrya of vector 
// we can only make column variable and rows fixed now both variable we can make

int X; // Number of vector
cin>>X;

vector<vector<int>> v2; // every v2[0] is itself a vector SMH !!!

for( int i=0;i<X;i++){
  int p;
  cin>>p; 
  vector<int> temp; 
  for( int j=0;j<p;j++){ // to enter and fill eg v1[0] 
    int q;
    cin>>q;
    temp.push_back(q); // We take element in temp vector coz v[i] dont exist its empty so we make temp to
    // act as someone who can take elements and pass it to v2 pura ka pura vector hi
    // Temp stores ROWS of vector of vector 
  }

  v2.push_back(temp); // Pushing back whole temp vector 
}

v[0].push_back(10); // THE REAL USE OF VECTOR OF VECTOR 
// EVERYTHING IS ALTERABLE

v.push_back(vector<int> ()); // EMPTY VECTOR 

for(int i=0;i<v2.size();i++)
{
  printvec2(v2[i]);
}



}
