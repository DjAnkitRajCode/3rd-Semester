#include<iostream>
using namespace std;
class stud{
    char name[20];
    int roll, total, marks[6];
    public:
    stud()
    {
         cout<<"Enter the name of student: ";
        fflush(stdin);
        gets(name);
        cout<<"Enter the roll number: ";
        cin>>roll;
        cout<<"Enter the marks: ";
        for(int i=0;i<6;i++)
        {
            cin>>marks[i];
        }
        
    }
    void calculate()
    {
        total=0;
        for(int j=0;j<6;j++)
    {
        total=total+marks[j];
    }

    }
    void dis()
    {total=total/6.0;
        if(total>=90 && total<=100)
        {
            cout<<name<<"\nGrade : O\n";
        }
        else if(total>=80 && total<90)
        {
            cout<<name<<"\nGrade : E\n";
        }
        else if(total>=70 && total<80)
        {
            cout<<name<<"\nGrade : A\n";
        }
         else if(total>=60 && total<70)
        {
            cout<<name<<"\nGrade : B\n";
        }
          else if(total>=50 && total<60)
        {
            cout<<name<<"\nGrade : C\n";
        }
        else if(total>=50 && total<60)
        {
            cout<<name<<"\nGrade : D\n";
        }
        else{
            cout<<name<<"\nFail";
        }
    }

};
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    stud s[n];
    for(int i=0;i<n;i++)
    {
        s[i].calculate();
    }
    for(int i=0;i<n;i++)
    {
        s[i].dis();
    }
return 0;    
}