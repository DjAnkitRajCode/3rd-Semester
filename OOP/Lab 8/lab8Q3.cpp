#include<iostream>
using namespace std;
class time1
{
    int hour;
    int mins;
    int sec;
    public:
    time1 operator--(int y);
    time1 &operator--();
    time1 &operator++();
    time1  operator++(int x);
    time1()
    {}
    time1(int x,int y,int z)
    {   sec=z;
       mins=y+z/60;
       sec=sec%60;
        hour=x+mins/60;
        mins=mins%60;
    }
    void display()
    {
        cout<<hour<<" : "<<mins<<" : "<<sec<<endl;
    }
};
time1 &time1::operator++()//prefix increment
    {
      hour=hour+1; 
      mins= mins+1; 
      sec=sec+1;
      mins=mins+sec/60;
      sec=sec%60;
      hour=hour+mins/60;
      mins=mins%60;
      return *this;
    }
 time1 time1::operator++(int x)//post fix increment
  { time1 xy=*this;
      ++*this;
      return xy;
  }
  time1 time1::operator--(int y)//postfix decrement
{ time1 x;
       x=*this;
       --*this;
       return x;
}
time1 &time1::operator--()//prefix decrement
   {    if(hour<1)
       {
           cout<<"Incorrect statement\n";
           return *this;
       }
       else
        hour--;
    
       if(sec<1)
          sec=59;
       else
           sec--;
       
       if(mins<1)
           mins=59;
       else
           mins--;

       return *this; 
   }
int main()
{
 time1 t1(2,65,98),t2;
 t2=++t1;
 t2.display();
(t1++).display();
t1.display();
 t2=--t1;
 t2.display();
(t1--).display();
t1.display();
return 0;
}