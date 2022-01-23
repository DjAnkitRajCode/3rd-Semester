#include<iostream>
using namespace std;
class vector{
    int n;
    float a[100];
public:
void create()
{
    cout<<"Enter the number of coordinates:";
    cin>>n;
    cout<<"Enter the coordinates: ";
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
}
void modify()
{cout<<"Enter the new coordinates: ";
for(int k=0;k<n;k++)
{
cin>>a[k];
}
}
void multiply()
{
    int m;
    cout<<"Enter the scalar quantity: ";
    cin>>m;
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]*m;
    }
}
void mul()
{int j;
    int c;
    cout<<"Enter the scalar quantity: ";
    cin>>c;
    cout<<"Enter the coordinate in which you want to multiply: ";
    cin>>j;
    a[j-1]=a[j-1]*c;
}
void dis()
{cout<<"P(";
    for(int j=0;j<n;j++)
    {if(j!=n-1)
    {
        cout<<a[j]<<",";
    }
    else{
        cout<<a[j];
    } 
    
}cout<<")"<<endl;
}
void divide()
{
      float d;
    cout<<"Enter the scalar quantity: ";
    cin>>d;
    for(int j=0;j<n;j++)
    {
        a[j]=(float)a[j]/d;
    }
}
void add()
{
    float e;
    cout<<"Enter the scalar quantity: ";
    cin>>e;
    for(int j=0;j<n;j++)
    {
        a[j]=a[j]+e;
    }
}
};
int main()
{
    vector v;
    v.create();
    v.dis();
    v.modify();
    v.dis();
    v.multiply();
    v.dis();
    v.mul();
    v.dis();
    v.divide();
    v.dis();
    v.add();
    v.dis();
    return 0;
}