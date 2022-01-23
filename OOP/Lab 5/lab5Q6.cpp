#include<iostream>
using namespace std;
class a{
    static int c;
    public:
    a()
    {
      c++;
       cout<<c<<" no of object is created\n";
    }
    ~a()
    {
        cout<<c<<" no of object is destroyed\n";
         c--;
    }
};
int a::c;
int main()
{ a q;
  a r;
  a l;
return 0;
}