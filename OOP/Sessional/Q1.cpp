#include<iostream>
using namespace std;
void add( int p,int q,int r=0,int s=0);
int main()
{
 int p,q,r,s;
 cout<<"Enter Numbers\n";
 cin>>p>>q>>r>>s;
 add(p,q);
 add(p,q,r);
 add(p,q,r,s);
 return 0;
}
void add(int p,int q,int r,int s)
{
 int sum=p+q+r+s;
 cout<<"Sum of the given numbers are: "<<sum<<endl;
}