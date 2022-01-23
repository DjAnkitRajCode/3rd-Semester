#include<iostream>
using namespace std;
int h;
class fraction{
    int a;
    int b;
    public:
    void assign()
    {
        cout<<"Enter the n numenator: ";
        cin>>a;
        cout<<"Enter the n denominator: ";
        cin>>b;
    }
    void add(fraction x,fraction y)
    {int l;
        for(int i=1;i<=x.b*y.b;i++)
        {if(i%x.b==0 && i%y.b==0)
        {
             l=i;
             break;
        }
        }
          int k=l/x.b;
          k=k*x.a;
          int j=l/y.b;
          j=j*y.a;
          int ad=k+j;
          for(int i=ad<l?ad:l;i>=1;i--)
          {if(ad%i==0 && l%i==0)
             { h=i;
              break;
          }
          }
          ad=ad/h;
          l=l/h;
          cout<<"Result of Addition="<<ad<<"/"<<l<<endl;
          
    }
    void subtract(fraction &x,fraction &y)
    {
        int l;
        for(int i=1;i<=x.b*y.b;i++)
        {if(i%x.b==0 && i%y.b==0)
        {
             l=i;
             break;
        }
        }
         int k=l/x.b;
          k=k*x.a;
          int j=l/y.b;
          j=j*y.a;
          int sub=abs(k-j);
          for(int i=sub<l?sub:l;i>=1;i--)
          {if(sub%i==0 && l%i==0)
          {
              h=i;
              break;
          }
          }
          sub=sub/h;
          l=l/h;
          cout<<"Result of Substraction="<<sub<<"/"<<l<<endl;
          
    }
    void multiply(fraction *x,fraction *y)
    {
        int m=x->a*y->a;
        int n=x->b*y->b;
         for(int i=m<n?m:n;i>=1;i--)
          {if(m%i==0 && n%i==0)
          {
               h=i;
              break;
          }
          }cout<<h;
          m=m/h;
          n=n/h;
          cout<<"Result of Multiplication="<<m<<"/"<<n<<endl;
    }
};
int main()
{
    fraction f1,f2,f3,f4,f5;
    cout<<"For Fraction 1: \n";
    f1.assign();
    cout<<"For Fraction 2: \n";
    f2.assign();
    f3.add(f1,f2);
    f4.subtract(f1,f2);
    f5.multiply(&f1,&f2);
    return 0;
}