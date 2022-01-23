#include<iostream>
using namespace std;
class imag
{
    float real;
    float complex;
    public:
   imag()
   {
       cout<<"Enter the value of real"<<endl;
       cin>>real;
       cout<<"enter the value of imag"<<endl;
       cin>>complex;
   }
   imag(float x , float y)
   {real=x;
    complex=y;
   }
   imag(const imag & x)
   {
       real=x.real;
       complex=x.real;
   }
   ~imag()
   {
       cout<<"Distructor is invoked "<<endl;
   }
   void disp()
   {
       cout<<"real:"<<real;
       cout<<"imag :"<<complex;
   }
};
int main()
{
    imag a;
    a.disp();
    imag b(5,7);
     b.disp();
     imag c(b);
     c.disp();
     return 0;

}