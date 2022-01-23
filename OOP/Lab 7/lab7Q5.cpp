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
};
class test:public virtual student
{
 protected:
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
class sports:public virtual student
{ 
 protected:
 int sm;
 public:
 sports(char n[],int r,int a,int s):student(n,r,a)
 {
  sm=s;
 }
 void display()
 {
  cout<<"Sports Marks="<<sm<<endl;
 }
};
class result:public test,public sports
{
 float total,per;
 public:
 result(char n[],int r,int a,int m1,int m2,int m3,int m4,int m5,int s):student(n,r,a),test(n,r,a,m1,m2,m3,m4,m5),sports(n,r,a,s)
 {
  total=0;
 }
 void calculate()
 {
  for(int i=0;i<5;i++)
  {
   total+=marks[i];
  }
  total+=sm;
  per=(total/600)*100;
 }
 void display()
 {
  student::display();
  test::display();
  sports::display();
  cout<<"Total Marks="<<total<<endl;
  cout<<"Percentage="<<per<<endl;
 }
}; 
int main()
{
 char n[50];
 int r,a,m1,m2,m3,m4,m5,s;
 cout<<"Enter Name:";
 cin>>n;
 cout<<"Enter roll:";
 cin>>r;
 cout<<"Enter Age:";
 cin>>a;
 cout<<"Enter 5 Marks:";
 cin>>m1>>m2>>m3>>m4>>m5;
 cout<<"Enter Sports Marks:";
 cin>>s;
 result re(n,r,a,m1,m2,m3,m4,m5,s);
 re.calculate();
 re.display();
 return 0;
}