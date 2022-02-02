#include<bits/stdc++.h>

using namespace std;

// MAPS is a DS which stores KEY-VALUE Pairs 
// Ordered Maps use Red black trees : an advanced ds
// maps are not contious it++ : yes , it+1 : no 
// All keys are unique if redeclaration happens the pair with that pre-existing key updates


void print(map<int,string> &m)
{
  cout<<m.size()<<endl;
for( auto &pr : m)
{
  cout<<pr.first<<" "<<pr.second<<endl;
}

// printing also O(logn)

}

int main()
{

map<int,string> m;

m[1]="abc"; //O(logn) ALSO DEPENDS ON KEY ALSO ( STUDY RED BLACK TREES )
m[5]="cdc";
m[3]="acd";

// Red Black Trees : It compares other strings length and place it acc to sorted method 
// string comparison time is added therefore
// Final Time complexity {s.size()*O(logn)}

auto it1=m.find(3); // returns iterator of 3 if it of 3 doesnt exist then retunr m.end()
if(it1==m.end()){
  cout<<"NO VALUE"<<endl;
}
else{
  cout<<(*it1).first<<" "<<(*it1).second<<endl;
}


if(it1!=m.end()) // to check if the it exist or not to avoid segmentation fault
m.erase(it1); //O(logn) one must never give any iterator that doesnt exist else will give segmentation fault

print(m); 

m.clear(); // clears the whole map 


// Another way of insert 

m.insert({4,"afg"});

// priniting using iterator method 1 

map<int,string> :: iterator it;

for(it=m.begin();it!=m.end();it++)
{

  cout<<(*it).first<<" "<<(*it).second<<endl; // prints in sorted order

}

// strings are also stored in lexographical order ie dictionary order
// printing using auto method 2



print(m);



}