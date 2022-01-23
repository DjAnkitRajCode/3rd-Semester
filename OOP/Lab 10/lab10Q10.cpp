#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define size 10
template <typename T>
class src
{
    T *queue;
    int front, rear;

public:
    src()
    {
        front = rear = -1;
        queue = new T[size];
    }
    void enqueue(T x)
    {
        if (rear < size - 1)
        {
            if (rear == -1)
            {
                front++;
            }
            queue[++rear] = x;
        }
        else
        {
            cout << "Queue Over flow" << endl;
            exit(0);
        }
    }
    T dequeue()
    {
        if (front == -1)
        {
            cout << "Queue Undeflow" << endl;
            exit(0);
        }
        cout << "removing :" << queue[front]<<endl;
        if (front == rear - 1)
        {
            int x = front;
            front = rear = -1;
            return queue[x];
        }
        return queue[front++];
    }
    void disp()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    src<int> ss;
    for (int i = 1; i <= 10; i++)
    {
        ss.enqueue(i * 10);
    }
    ss.disp();
    for (int i = 1; i <= 5; i++)
    {
        ss.dequeue();
    }
    ss.disp();
    cout<<endl;
    src<double> st;
    for (int i = 1; i <= 10; i++)
    {
        st.enqueue(i*10.5032);
    }
    st.disp();
    for (int i = 1; i <= 5; i++)
    {
        st.dequeue();
    }
    st.disp();

    return 0;
}