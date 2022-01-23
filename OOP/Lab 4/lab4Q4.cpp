#include<iostream>
using namespace std;

class student
{   
  
     long long roll;
     string name;
     float marks;
    
 public:
 static float total_marks;
   void get_data()
   {
       cout<<"ENter your roll NO."<<endl;
       cin>>roll;
       cin.get();
       cout<<"Enter your name :"<<endl;
       getline(cin,name);
       cout<<"Enter your marks"<<endl;
       cin>>marks;
       total_marks=total_marks+marks;

   }
    
  static void avg_mk(student s1,int n)
{
     cout<<"Avg marks of class is"<<endl;
        
        cout<<s1.total_marks/n<<endl;
}

};
float student::total_marks=0;
int main()
{   cout<<"Enter no. of students"<<endl;
int n;
cin>>n;    
    student ss[n];
for(int i=0;i<n;i++)
{
    ss[i].get_data();
} 
student s1;
student::avg_mk(s1,n);
   return 0;
}