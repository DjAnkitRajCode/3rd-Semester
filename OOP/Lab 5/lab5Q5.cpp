#include<iostream>
using namespace std;
class a{
    public:
    a()
    {
       cout<<"CONSTRUCTOR INVOKED\n";
    }
    ~a()
    {
    
        cout<<"DESTRUCYOR INVOKED\n";
    }
};
int main()
{ a q;
a r;
a l;
return 0;
}