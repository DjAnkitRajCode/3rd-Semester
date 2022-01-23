#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class complexx
{
    float real;
    float imag;
    public:

    complexx(float x,float y)
    {
        real=x;
        imag=y;
    }
    void display()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
void operator==(complexx& k)
 {
     if(this->real==k.real&&this->imag==k.imag)
     {
          cout<<"THey are equal"<<endl;
     }
     else
     {
         cout<<"THey are not equal"<<endl;
     }
     
 }
 void operator=(complexx & y)
 {
     this->real=y.real;
     this->imag=y.imag;
 }

}; 

int main()
{
    complexx c1(22,34.5),c2(33,56.5);
    c1.display();
    c2.display();
    c1==c2;
    c1=c2;
    c1==c2;
    return 0;
}