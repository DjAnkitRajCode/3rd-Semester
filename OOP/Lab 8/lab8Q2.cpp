#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class a
{
     int *arr;
     int size;
     public:
     a()
     {}
     a(int x)
     {  size=x;
         arr= new int[x];
     }
     friend ostream & operator<<(ostream &out , const a & m);//prototype
     friend istream & operator>>(istream &input,const a & y);//prototype
    
};
 ostream & operator<<(ostream &out,const a & obj)
   {
       for(int i=0;i<obj.size;i++)
       {
           out<<obj.arr[i]<<" ";
       }
       out<<endl;
     return out;
   }
   istream & operator>>(istream & input,const a & y)
   {
       cout<<"ENter the data"<<endl;
       for(int i=0;i<y.size;i++)
       {
           cin>>y.arr[i];
       }
       return input;
   }
int main()
{
   a obj1(5);
   cin>>obj1;
    cout<<obj1;
    return 0;
}