#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class src
{
  T*arr;
  int size;
  public:
  src(int s)
  {
      size=s;
      arr=new T[size];
  }
  void insertt(T*y)
  {
      for(int i=0;i<size;i++)
      {
          arr[i]=y[i];
      }
  }
  bool modify(T x,int pos)
  {
      if(pos>size)
      {
          return false;
      }
      arr[pos]=x;
      return true;
  }
  void multiply(int scalar)
  {
      for(int i=0;i<size;i++)
      {
          arr[i]=arr[i]*scalar;
      }
  }
  void disp()
  {
       for(int i=0;i<size;i++)
       {
           cout<<arr[i]<<" ";
       }
       cout<<endl;
  }
};
int main()
{
    src<int>ss(7);
    int arr[]={1,2,3,4,5,6,7};
    ss.insertt(arr);
    if(ss.modify(99,4))
    {
        cout<<"Value modified"<<endl;
    }
    else
    {
        cout<<"Incorrect position"<<endl;
    }
    
    ss.multiply(10);
    ss.disp();
return 0;
}