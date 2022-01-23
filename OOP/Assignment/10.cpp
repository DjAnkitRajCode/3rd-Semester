#include<iostream>
using namespace std;
float t=0, a;
int c=0, d=0;
class student{
    char name[20];
    int roll;
    float marks[20],avg,total;
    public:
    void assign(){
        cout<<"Enter the name of Student: ";
        fflush(stdin);
        gets(name);
        cout<<"Enter the roll number: ";
        cin>>roll;
        cout<<"Enter the marks: ";
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    void calculate()
    {
        total=0;
        for(int j=0;j<5;j++)
        {
            total=total+marks[j];
        }
        avg=total/5.0;
    }
    void cal()
    {
       
           t=t+avg;
       
    }
    void ab(){
        if(avg>=a)
        {
           c++;
        }
       else{
           d++;
       }
    }
    void d1()
    {
      cout<<name<<" Average marks: "<<avg<<endl;
    }
 
    int mark()
    {
        return total;
    }
    void dis()
    {
        cout<<name<<"  "<<roll<<"  "<<total<<endl;
    }
    void dis(student p)
    {
        cout<<p.name<<" "<<p.roll<<" "<<"Secured highest marks"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    student k[10],temp;
    for(int i=0;i<n;i++)
    {
        k[i].assign();
        
    }
    for(int i=0;i<n;i++)
    {
      
        k[i].calculate();
      
    }
    for(int i=0;i<n;i++)
    {
        
       
          k[i].cal();
    }a=t/n;
    for(int i=0;i<n;i++)
    {
      
        k[i].ab();
    }
    
     for(int i=0;i<n;i++)
    {
      k[i].d1();
    }
    cout<<"No. of students above average are: "<<c<<endl;
        cout<<"No. of students below average are: "<<d<<endl;
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(k[i].mark()>k[j].mark())
                {
                    temp=k[j];
                    k[j]=k[i];
                    k[i]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
    {
      k[i].dis();
    }
    k[n-1].dis(k[n-1]);
    return 0;
}