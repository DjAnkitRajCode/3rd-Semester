#include<iostream>

using namespace std;
class meter;
class feet
{
   float ft;
   float in;
   public:
   void get_data(float x,float y)
   {
       ft=x;
       in=y;
   }
friend void cmp(feet,meter);
   
};
class meter
{  float m;
   float cm;
   public:
     void get_data(float x,float y)
   {
       m=x;
       cm=y;
   }
   friend void cmp(feet,meter);

};

void cmp(feet x,meter y)
{   double dis1= x.ft*0.3048+x.in*0.0254;
    double dis2= y.m+y.cm/100;
    if(dis1>dis2)
    {
        cout<<"Feet one is greater"<<endl;
    }
    else if(dis1<dis2)
    {
        cout<<"Meter one is greater"<<endl;
    }
    else
    {
        cout<<"Both are equal"<<endl;
    }
    
}

int main()
{
    feet x;
    x.get_data(24.3,667.3);
    meter y;
    y.get_data(22.5,105.6);
    cmp(x,y);
    return 0;
}