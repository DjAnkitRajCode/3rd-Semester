#include<iostream>
#include<string>
using namespace std;
class student{
    char name[20];
    int roll,marks;
    public:
    void details()
    {
        cout<<"Enter the Name: ";
        fflush(stdin);
        gets(name);
        cout<<"Enter the Roll number: ";
        cin>>roll;
        cout<<"Enter the Marks: ";
        cin>>marks;
    }
    int mark()
    {
      return marks;
    }
    void dis()
    {
    cout<<"\nName : "<<name<<" "<<"\nRoll : "<<roll<<"\nMarks: "<<marks<<endl;;

    }
};
int main()
{
    student s[90],temp;
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s[i].details();
    }
     
           for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i].mark()<s[j].mark())
                {
                    temp=s[j];
                    s[j]=s[i];
                    s[i]=temp;
                }
            }
        }
    for(int i=0;i<n;i++)
    {
        s[i].dis();
    }
    return 0;
}