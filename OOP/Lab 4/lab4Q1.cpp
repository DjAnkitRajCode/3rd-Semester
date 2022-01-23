#include<iostream>
using namespace std;
class bcd;
class abc{
    int a;
    public:
    void assign(int k)
    {
        a=k;
    }
    friend void swap(abc &,bcd &);
    void show()
    {
        cout<<"Value of a is:-"<<a<<endl;
    }
};
class bcd{
    int b;
    public:
     void assign(int k)
    {
        b=k;
    }
    friend void swap(abc &,bcd &);
     void show()
    {
        cout<<"Value of b is:-"<<b<<endl;
    }
};
void swap(abc&x,bcd&y)
{ int t;
t=x.a;
x.a=y.b;
y.b=t;
}
int main()
{
    abc ob1;
    bcd ob2;
    ob1.assign(20);
    ob2.assign(30);
    ob1.show();
    ob2.show();
    swap(ob1,ob2);
    ob1.show();
    ob2.show();
    return 0;

}