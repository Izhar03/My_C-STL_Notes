#include<bits/stdc++.h>

using namespace std;

// Stacks : recursion , Balanced parenthesis , Next greater element LIFO
// Queues : Graphs , BFS , DFS etc FIFO

int main()
{
  stack<int> s; // declare s stack of int 
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  while(!s.empty()){ // Until stack becomes empty 
    cout<<s.top()<<endl; // retunrs top value 
    s.pop(); // works as an iterator will reduce stack size by 1 

  }

  queue<string> q; // declare s stack of int 
  q.push("first");
  q.push("second");
  q.push("third");
  q.push("fourth");
  q.push("fifth");

  while(!q.empty()){ // Until queue becomes empty 
    cout<<q.front()<<endl; // retunrs front value 
    q.pop(); // works as an iterator will reduce queue size by 1 

  }








}