#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class src
{
    T a,b;
   public:
   src(T x,T y)
   {
       a=x;
       b=y;
   }
   T sum()
   {
       T sum=a+b;
       return sum;
   }
};
int main()
{
    src<float>ss(234.66,567.44);
    cout<<"Sum = "<<ss.sum()<<endl;
    return 0;
}