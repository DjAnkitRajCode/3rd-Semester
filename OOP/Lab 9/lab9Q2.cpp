#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
protected:
    char name[20];
    long int id;
public:
    Employee(char *s , long int idd)
    {
        strcpy(name, s);
        id = idd;
    }
    virtual void calcSal() = 0;
};

class Regular : public Employee
{   float sal;
    float da;
    float hra;
public:

    Regular(char *s, long int idd, float salary):Employee(s,idd)
    {  sal=salary;
        da =(float)0.1*salary;
        hra =(float)0.5*da;
    }
    void calcSal()
    {
        cout<<"Salary of Regular Employee : "<< sal+da+hra<<endl;
    }

};

class PartTime : public Employee
{
    int hrs;
    int pph;

public:

    PartTime(char *s,long int idd, int h, int p):Employee(s,idd)
    {
        hrs = h;
        pph = p;
    }
    void calcSal()
    {
        cout<<"Salary of Part-Time Employee : "<<(hrs*pph) <<endl;
    }
};

int main()
{   Employee *e;
char s[]="Suraj";
     Regular r(s,1906068,50000);
     PartTime p(s, 1906068, 20, 5000);
     e=&r;
     e->calcSal();
     e=&p;
     e->calcSal();
    return 0;
}