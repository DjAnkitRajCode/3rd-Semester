#include<iostream>
using namespace std;
class dist
{
    float feet;
    int inch;
    public:
    dist()
    {
         feet=0;
         inch=0;

    }
    dist(float x,int y)
    {
        feet=x;
        inch=y;
    }
    void display()
    {
        cout<<feet<<"Ft"<<" ";
        cout<<inch<<"Inch"<<" "; 
        cout<<endl;
    }
    dist operator +(dist &d1)
    {     inch=inch+d1.inch;
          feet=feet+d1.feet+inch/12;
          inch=inch%12;
          return *this;
    }
    dist operator +(int x)
    {
        inch = inch+x;
        return *this;
    }
};
int main()
{
    dist d1(22,23),d2(33,34),d3,d4;
    d3=d1+d2;
    d3.display();
    d4=d2+4;
    d4.display();
    return 0;
}