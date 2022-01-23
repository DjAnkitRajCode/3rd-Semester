#include<iostream>
using namespace std;
class polynomial{
    int a[100],sum[100],multi[100];
    int n,j,k;
    public:
    void assign()
    {
        cout<<"Enter the size of polynomial: ";
        cin>>n;
        cout<<"Enter the elements of polynomial:  ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void add(polynomial s1,polynomial s2)
    {
        if(s1.n>s2.n)
        {
            j=s1.n;
            for(int i=0;i<j;i++)
            {
                sum[i]=s1.a[i];
            }  
            for(int i=0;i<s2.n;i++)
            {
                sum[i]=sum[i]+s2.a[i];
            }
        }
        else{
            j=s2.n;
            for(int i=0;i<j;i++)
            {
                sum[i]=s2.a[i];
            }  
            for(int i=0;i<s1.n;i++)
            {
                sum[i]=sum[i]+s1.a[i];
            }
        }
    }
    void multiply(polynomial s1,polynomial s2)
    {
     k=s1.n+s2.n-1;
        for(int i=0;i<k;i++)
            {
                multi[i]=0;
        }
        for(int i=0;i<s1.n;i++)
        {
            for(int j=0;j<s2.n;j++)
            {
                multi[i+j]=multi[i+j]+s1.a[i]*s2.a[j];
            }
        }
    }
    void dis(polynomial s3)
    {
        for(int i=s3.j-1;i>=0;i--)
        {
            cout<<s3.sum[i]<<" ";
        }cout<<endl;
    }

   void dis1(polynomial s3)
    {
        for(int i=k-1;i>=0;i--)
        {
            cout<<s3.multi[i]<<" ";
        }cout<<endl;
    }
};
int main()
{
    polynomial s1,s2,s3,s4;
    s1.assign();
    s2.assign();
    s3.add(s1,s2);
    s3.dis(s3);
    s4.multiply(s1,s2);
    s4.dis1(s4);
    return 0;
}