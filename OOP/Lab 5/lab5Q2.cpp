#include<iostream>
using namespace std;
class t{
    int h;
    int m;
    int s;
    public:
    t()
    {
        h=0;
        m=0;
        s=0;
    }
    t(int x,int y,int z)
    {
         s=z;
         m=y+s/60;
         s=s%60;
         h=x+m/60;
         m=m%60;
   }
    t(int x,int z)
    {int y=0;
     s=z;
         m=y+s/60;
         s=s%60;
         h=x+m/60;
         m=m%60;
    }

          t(const t &j)
          {
              s=j.s;
              m=j.m+s/60;
              s=j.s%60;
              h=j.h+m/60;
              m=j.m%60;
          }
          void display()
          {
              cout<<h<<" hours "<<m<<" min "<<s<<" sec "<<endl;
          }
          ~t()
          {
              cout<<"Destructor >>>>>>> invoked"<<endl;
          }

};
int main()
{
 t a(10,60),b(20,30,3600),c;
 c=b;
 a.display();
 b.display();
 c.display();
 return 0; 
}