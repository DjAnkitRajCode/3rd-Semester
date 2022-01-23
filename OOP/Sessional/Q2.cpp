#include<iostream>
using namespace std;
class time1
{
 int a;
 public:
 time1()
 {
  a=0;
 }
 time1(int b)
 {
    a=b;
 }
 bool operator>(time1 complete)
 {
    return(a>complete.a)?true:false;
 }
 int operator-(time1 complete)
 {
    return(complete.a-a);
 }
};
int main()
{
 time1 start(7),complete(13);
 if(start>complete)
 {
  cout<<"error\n";
 }
 else
 {
 int s=start-complete;
 cout<<"Difference is: "<<s<<endl;
 }
return 0;
}