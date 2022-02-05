#include<iostream>

using namespace std;

int main()
{

int l=0,h=9,mid,n;

int A[]={1,2,3,4,5,6,7,8,9};
cout<<"Enter number to be found";
cin>>n;

while (l<=h)
{
   mid=(l+h)/2;
   if(n==A[mid])
   {
      cout<<"FOUND AT "<<mid;
      return 0;
   }

   else if(n<A[mid])
   h=mid-1;
   else
   l=mid+1;
}
cout<<"NOT FOUND";




}


