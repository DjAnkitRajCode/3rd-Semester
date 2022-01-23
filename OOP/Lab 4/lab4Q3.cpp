#include<iostream>
using namespace std;
class ss
{
    int data;
    public:
    static int count;
    static int c; 
  
   void input()
    { cout<<"Enter the no."<<endl;
       cin>>data;
       ++count;
    }
    void disp()
   {  cout<<"value of data  is:"<<data<<endl;
       c++;
   }
   static void show()
   {
       cout<<"Input function is called :"<<count<<" times"<<endl;
       cout<<"disp function is called :"<<c<<" times"<<endl;
   }
};
int ss::c;
int ss::count;

int main()
{
    ss s1,s2,s3;
    s1.input();
    s1.disp();
    s2.input();
    s3.input();
    s3.disp();
    ss f;
    f.show();
    return 0;

}