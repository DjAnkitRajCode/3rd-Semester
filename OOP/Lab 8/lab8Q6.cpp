#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class dist
{
    float d;
    public:
    dist(float x)
    {
       d=x;
    }
    void display()
    {
        cout<<"Distance is "<<d<<endl;
    }
    dist operator>(dist & a)
    {
        if(this->d>a.d)
        {
            return *this;
        }
        else
        {
            return a;
        }
        
    }
    void operator==(dist &a)
    {
        if((float)this->d==(float)a.d)
        {
            cout<<"THey are  equal"<<endl;
        }
        else
        {
            cout<<"THey are not equal"<<endl;
        }

        
    }
};
int main()
{
    dist x(5.67),y(5.66);
    (x>y).display();
    x==y;
    dist z(5.67);
    x==z;
    return 0;
}