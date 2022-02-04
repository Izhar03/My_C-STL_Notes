#include<bits/stdc++.h>

using namespace std;

int main()
{

map<pair<int,int>, int> m; // Nested map with pair and int here the key is pair and value is int


pair<int,int> p1,p2; // Key defining 

p1={1,2};
p2={2,3};

cout<<(p1<p2); // It works via comprision 
// since p1 ka first element is < p2 ka first therefore p1<p2 hence gives result 1
// if first is same then move to next element comparision
// same with sets and vectors in maps ( nesting )

map<pair<string,string>, vector<int> > m1;
// a good example would be first name and last name are key ( string , string )
// and vector int stores marks 
 
 int N;
 cin>>N;
 for(int i=0;i<N;i++){
   string fn,ln;
   int ct;
   cin>>fn>>ln>>ct;
   for( int j=0 ; j<ct ; j++){
     int x;
     cin>>x;
     m1[{fn,ln}].push_back(x); // m1[{fn,ln}] :  this thing becomes a vector 
     // Eg m[1]="abc" we used to do similarly {fn,ln} plays the role of 1 since the key is a pair of string

   }
   cout<<endl;
 }

 print(m1);

// for (auto &pr : m1){

auto &full_name = pr.first;
auto &list = pr.second;
cout<<full_name.first<<" "<<full_name.second<<endl;
cout<<list.size()<<endl;

for( auto &element : list){
  cout<<element<<" ";
}
cout<<endl;
}

// PRINTS IS ALWAYS IN SORTED ORDER 


 
   
}
 






