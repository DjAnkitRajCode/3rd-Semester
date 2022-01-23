#include<iostream>
#include<string.h>
using namespace std;
void office(char[],char[]);
     void office(int,int);
int main()
{
    char name[20],deprt[20];
    int en,sal;
    cout<<"Enter the name of Employee: ";
    gets(name);
    cout<<"Enter the Employee no.: ";
    cin>>en;
    cout<<"Enter the Department: ";
    cin>>deprt;
    cout<<"Enter the Salary: ";
    cin>>sal;
    office(name,deprt);
    office(en,sal);
    return 0; 
}
inline void office(char x[],char y[])
{
cout<<"\nName: "<<x<<"\nDepartment: "<<y<<" ";
     
}
inline void office(int x,int y){
cout<<"\nEmployee no.: "<<x<<"\nSalary: "<<y<<endl;
}