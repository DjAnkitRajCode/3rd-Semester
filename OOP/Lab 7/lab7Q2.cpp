#include<iostream>
#include<string.h>
using namespace std;
class student
{
 char *name;
 int roll;
 int age;
 public:
 student()
 { }
 student(char n[],int r,int a)
 {
  int n1=strlen(n);
  name=new char[n1];
  strcpy(name,n);
  roll=r;
  age=a;
 }
 void display()
 {
  cout<<"Name:"<<name<<endl;
  cout<<"Roll:"<<roll<<endl;
  cout<<"Age:"<<age<<endl;
 }
 ~student()
 {
  delete []name;
 }
};
class test:public student
{
 float marks[5];
 public:
 test()
 { }
 test(char n[],int r,int a,int m1,int m2,int m3,int m4,int m5):student(n,r,a)
 {
  marks[0]=m1;
  marks[1]=m2;
  marks[2]=m3;
  marks[3]=m4;
  marks[4]=m5;
 }
 void display()
 {
  student::display();
  for(int i=0;i<5;i++)
  {
   cout<<"Marks "<<i+1<<"="<<marks[i]<<endl;
  }
 }
};
int main()
{
 char n[50];
 int r,a,m1,m2,m3,m4,m5;
 cout<<"Enter Name:";
 cin>>n;
 cout<<"Enter roll:";
 cin>>r;
 cout<<"Enter Age:";
 cin>>a;
 cout<<"Enter 5 Marks:";
 cin>>m1>>m2>>m3>>m4>>m5;
 test t(n,r,a,m1,m2,m3,m4,m5);
 t.display();
 return 0;
}