#include<iostream>
#include<string>
using namespace std;
int bal=1000;
int age;
class employee{
    char name[20], desg[20], add[100];
    int id,salary, month, year, day;
    public:
    employee()
    {
    cout<<"Enter name of Employee: ";
    gets(name);
    cout<<"Enter Employee ID: ";
    cin>>id;
    cout<<"Enter Designation: ";
    cin>>desg;
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter Address: ";
    fflush(stdin);
    gets(add);
     cout<<"Enter D.O.B: ";
    cin>>day>>month>>year;
    }
    void deposit()
    {
        bal=bal+salary;
    }
    void calculate(){
         age=2020-year;

    }
    void dis()
    {
        cout<<name<<" \n"<<age<<" years \n"<<desg<<" \n"<<bal<<endl;
    }

};
int main()
{employee e;
e.deposit();
e.calculate();
e.dis();
return 0;
}