#include<iostream>
using namespace std;
class stud{
 char name[20];
 int roll;
 class mark{
    int marks[20],n;
    public:
    void setmark()
    {
    cout<<"Enter the no of subjects: ";
    cin>>n;
    cout<<"Enter the marks: ";
    for(int i=0;i<n;i++){
    cin>>marks[i];
    }
}
void show(){
    for(int i=0;i<n;i++)
    {
    cout<<marks[i]<<" ";
    }
    cout<<endl;
    }
};
mark m;
public:
 void assign()
 {
 cout<<"Enter the name: ";
 gets(name);
 cout<<"Enter the roll number: ";
 cin>>roll;
 }
 void getmark()
 {
 m.setmark();
 }
 void display()
 {cout<<name<<" "<<roll<<"\n"<<"Marks are: ";
 m.show();
 }
};
int main()
{
 stud s;
 s.assign();
 s.getmark();
 s.display();
 return 0;
}