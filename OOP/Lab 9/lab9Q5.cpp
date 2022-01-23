#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class media
{
protected:
    char title[50];
    float price;

public:
    media(char *s, float a)
    {

        strcpy(title, s);
        price = a;
    }
    virtual void display() {}
};

class book : public media
{

    int pages;

public:
    book(char *s, float a, int p) : media(s, a)
    {

        pages = p;
    }

    void display()
    {
        cout << "\nTitle : " << title;
        cout << "\nPages : " << pages;
        cout << "\nPrice : " << price;
    }
};
class tape : public media
{
    float time;

public:
    tape(char *s, float a, float t) : media(s, a)
    {
        time = t;
    }
    void display()
    {
        cout << "\nTitle : " << title;
        cout << "\nPlay time : " << time << "mins";
        cout << "\nPrice : " << price;
    }
};
int main()
{char a[]="C++";
 char b[]="C";
    book book1(a,450,350);
    tape tape1(b,90,55);
    media *list[2];
    list[0] = &book1;
    list[1] = &tape1;
    list[0]->display();
list[1]->display();
return 0;
}