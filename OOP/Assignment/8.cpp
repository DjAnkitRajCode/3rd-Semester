#include<iostream>
using namespace std;
int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
class age{
    int day, month, year;
    public:
    void assign()
    {
        cout<<"Enter your day: ";
        cin>>day;
        cout<<"Enter your month: ";
        cin>>month;
        cout<<"Enter your year: ";
        cin>>year;
    }
    void calculate(age a,age b)
    {
         if (a.day > b.day) {
      b.day = b.day + m[a.month - 1];
      b.month = b.month - 1;
   }
   if (a.month > b.month) {
      b.year = b.year - 1;
      b.month = b.month + 12;
   }day = b.day- a.day;
   month = b.month - a.month;
   year = b.year - a.year;

}
    
     void display()
     {
         cout<<"Age: "<<year<<" years "<<month<<" month "<<day<<" days\n";
     }
};
int main()
{
    age a1,a2,a3;
    cout<<"Enter your D.O.B\n";
    a1.assign();
    cout<<"Enter Today's Date\n";
    a2.assign();
    a3.calculate(a1,a2);
    a3.display();
    return 0;
}