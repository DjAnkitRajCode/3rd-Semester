#include<iostream>
#include<math.h>
using namespace std;
class shape
{
 protected:
 float area;
};
class circle:public shape
{
 float r;
 public:
 circle(int radius)
 {
  r=radius;
 }
 void calculate()
 {
  area=3.14*r*r;
 }
 void display()
 {
  cout<<"Area of Circle="<<area<<endl;
 }
};
class triangle:public shape
{
 int a;
 int b;
 int c;
 public:
 triangle(int s1,int s2,int s3)
 {
  a=s1;
  b=s2;
  c=s3;
 }
 void calculate()
 {
  int s;
  s=(a+b+c)/2;
  area=pow((s*(s-a)(s-b)(s-c)),0.5);
 }
 void display()
 {
  cout<<"Area of Triangle="<<area<<endl;
 }
};
class rectangle:public shape
{
 int l;
 int b;
 public:
 rectangle(int length,int breadth)
 {
  l=length;
  b=breadth;
 }
 void calculate()
 {
  area=l*b;
 }
 void display()
 {
  cout<<"Area of Rectangle="<<area<<endl;
 }
};
int main()
{
 int r1,l,b,s1,s2,s3;
 cout<<"Enter Radius of Circle:";
 cin>>r1;
 cout<<"Enter Three Sides of triangle:";
 cin>>s1>>s2>>s3;
 cout<<"Enter Length and breadth of rectangle:";
 cin>>l>>b;
 circle c(r1);
 triangle t(s1,s2,s3);
 rectangle r(l,b);
 c.calculate();
 t.calculate();
 r.calculate();
 c.display();
 t.display();
 r.display();
 return 0;
}