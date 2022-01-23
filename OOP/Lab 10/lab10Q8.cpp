#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define size 10


template <typename T>
class src
{
    T*stack;
    

public:
int top;
    src()
    {
        top = -1;
        stack=new T[size];
    }
    void push(T x)
    {
        if (top < size - 1)
        {
            stack[++top] = x;
        }
        else
            cout << "Stack Overflow" << endl;
    }
    T pop()
    {   
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
           exit(0);
        }
        return stack[top--];
    }
    void disp()
    {
        if (top == -1)
        {
            cout << "Nothing to display" << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << stack[i] << " ";
            }
            cout<<"<<-TOP"<<endl;
        }
    }
    ~src(){
		delete[] stack;
	}
};
int main()
{
    src<int>ss;
    for(int i=1;i<=10;i++)
    {
        ss.push(10*i);
    }
    cout<<ss.pop()<<" poped"<<endl;
    cout<<ss.pop()<<" poped"<<endl;
    ss.disp();
    return 0;
}