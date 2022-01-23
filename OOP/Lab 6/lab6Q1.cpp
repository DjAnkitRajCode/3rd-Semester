#include<iostream>
#include<string>
using namespace std;
void assign(char[],char[]);
     void assign(int,int);
int main()
{
    char name[20];
    char dept[20];
    int n;
    int salary;
    cout<<"ENTER THE NAME OF EMPLOYEE: ";
    gets(name);
    cout<<"ENTER THE DEPARTMENT: ";
    cin>>dept;
    cout<<"ENTER THE EMPLOYEE NUMBER: ";
    cin>>n;
    cout<<"ENTER THE SALARY: ";
    cin>>salary;
    assign(name,dept);
    assign(n,salary);
    return 0; 
}
inline void assign(char x[],char y[])
{
cout<<"NAME IS:-"<<x<<" DEPARTMENT IS:-"<<y<<" ";
     
}
inline void assign(int x,int y){
cout<<"EMPLOYEE NUMBER IS:-"<<x<<" SALARY IS:-"<<y<<endl;
}