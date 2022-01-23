#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class abc
{
   char* ss;
   public:
   abc(int x)
   {
       ss= new char[x];
   }
   void get_data()
   {
       cout<<"Enter the String : ";
       cin>>ss;
   }
   void display()
   {
       cout<<ss;
   }
   abc & operator+(abc& a);
   ~abc()
   {
       delete[] ss;
   }
};
 abc & abc::operator+(abc& a)
{   int l1=strlen(this->ss);
    int l2=strlen(a.ss);
    ss=(char*)realloc(ss,l1+l2+1);
    strcat(this->ss,a.ss);
    return *this;
}
int main()
{ cout<<"ENter the size of the first string "<<endl;
  int x,y;
  cin>>x;
  cout<<"ENter the size of the 2nd string"<<endl;
  cin>>y;
    abc a(x+1),b(y+1);
   a.get_data();
   b.get_data();
   (a+b).display();
   return 0;
}