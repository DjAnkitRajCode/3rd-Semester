#include<iostream>
using namespace std;
class B;
class A
{
int check1;
public:
A(int x)
{
    check1=x;
}
friend void cmp(A,B);
};
class B
{
    int check2;
    public:
    B(int x)
    {
        check2=x;
    }
    friend void cmp(A,B);
};
void cmp(A a,B b)
{
   if(a.check1>b.check2)
   {
       cout<<"Data member of class A is Greater"<<endl;
   }
   else
   {
       cout<<"Data member of class B is Greater"<<endl;
   }
   
}
int main()
{
    A a(30);
    B b(60);
    cmp(a,b);
    return 0;
}