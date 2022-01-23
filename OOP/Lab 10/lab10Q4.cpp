#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T,int size>
class src
{
     T* arr;
     public:
     src()
     {
         arr=new T[size];
     }
     void get_data()
     {
        cout<<"Enter "<<size<<" elements"<<endl;
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
     }
     void sort_arr()
     {
         sort(arr,arr+size);
     }
     void disp()
     {
         for(int i=0;i<size;i++)
         {
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
     ~src()
     {
         delete[] arr;
     }
};
int main()
{
     src<int,10>ss;
     ss.get_data();
     ss.disp();
     ss.sort_arr();
     cout<<"Sorted array is"<<endl;
     ss.disp();
     return 0;
}