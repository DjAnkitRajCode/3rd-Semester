#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T1>
class src
{
    T1 a;
    T1 b;
    public:
    src(T1 x,T1 y)
    {
        a=x;
        b=y;
    }
    T1 cmp()
    {
       return (a>b)?a:b;
    }
};
int main()
{
    src<int>ss(109,'k');
    cout<<"Greater is: "<<ss.cmp()<<endl;
    return 0;
}