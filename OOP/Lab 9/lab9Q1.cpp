#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class shape
{
    public:
    virtual void area()=0;

};
class circle:public shape
{  float radius;
    public:
    circle(float x)
    {
       radius=x;
    }
    void area()
    {
        float area=(float)3.14*radius*radius;
        cout<<"Area is: "<<area<<endl;
    }

};
class square:public shape
{
    float side;
    public:
    square(float s)
    {
        side=s;
    }
    void area()
    {
        float area=(float)side*side;
        cout<<"Area is :"<<area<<endl;
    }
};
class tri:public shape
{
    float b,h;
    public:
    tri(float x,float y)
    {
       b=x;
       h=y;
    }
    void area()
    {
        float area=(float)0.5*b*h;
        cout<<"Area is :"<<area<<endl;
    }

};
int main()
{
    shape *ptr;
    circle c(4.65);
    ptr=&c;
    ptr->area();
    square s(22);
    ptr=&s;
    ptr->area();
    tri t(11.5,23.6);
    ptr=&t;
    ptr->area();
    return 0;
}