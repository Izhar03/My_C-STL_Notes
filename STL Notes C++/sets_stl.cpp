#include<bits/stdc++.h>

using namespace std;

// Sets = maps without pair value only number ie only key a set of key 
// collection of some element is set
// uses RBT 


void print( set<string> &s ) // prints in sorted order
{
  cout<<s.size()<<endl;

  for( string value : s )
  {
    cout<< value <<endl;
  }

}
void multiprint( multiset<string> &s1 ) // prints in sorted order
{
  cout<<s1.size()<<endl;

  for( string value1 : s1 )
  {
    cout<< value1 <<endl;
  }

}

int main()
{

set<string> s; // stores string in sorted order 
s.insert("abc"); // O(logn)
s.insert("zsdf");
s.insert("bcd");

auto it = s.find("abc"); //O(logn)
if(it!=s.end())
{
  cout<<(*it)<<endl;

}

print(s);


// For unordered set , same O(logn) becomes O(1))
// For unordered set , cannot put complex data type like pair vector 
// Only keep string , int etc since hash table is not defined for vector pair etc 


auto it1 = s.find("abc");
if(it1!=s.end())
{
  s.erase(it1);

}

print(s);

// Multiset allows multiple same enetries 
// complexity changes to logn again 

multiset<string> s1;
s1.insert("abc"); // O(logn)
s1.insert("zsdf");
s1.insert("bcd");
s1.insert("abc"); // O(logn)
s1.insert("zsdf");
s1.insert("bcd");

auto it2 = s1.find("abc");
if(it2!=s1.end())
{
  s1.erase(it2);

}

// This will delete only first abc not both beacuse itr is present only at first place right ? toh 
// wohi place delete hogi next nahi 

s1.erase("bcd"); // This has the power to delete all entries of bcd


multiprint(s1);









}