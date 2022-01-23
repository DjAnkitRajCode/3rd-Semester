#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T1,typename T2>
class src
{   T1*arr;
    int size;
    T2 key;
    public:
    src(int size)
    {
       arr=new T1[size];
    }
    void assign(T1*a)
    {
        for(int i=0;i<size;i++)
        {
            arr[i]=a[i];
        }
    }
    bool searchh(T2 key)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==key)
            {
                return true;
            }
        }
        return false;
    }
    ~src()
    {
        delete[] arr;
    }

};
int main()
{
    src<int,int>s(7);
    int arr[]={1,2,3,4,5,6,7};
    s.assign(arr);
    if(s.searchh(10))
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Not present"<<endl;
    }

return 0;
}