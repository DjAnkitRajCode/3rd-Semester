#include<iostream>
using namespace std;
class a{
    static int b;
    public:
    a()
    {b++;
        cout<<b<<" no of objects are created\n";
        cout<<b<<" no of objects are actived\n";
    }

    ~a()
    {
        cout<<b<<" no of objects are destroyed\n";
        --b;
        cout<<b<<" no of objects are actived\n";
    }
};
int a::b;
int main()
{a s;
 a t;
 if(1)
    {
        a c;
    }
}