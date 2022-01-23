#include<iostream>
#include<string.h>
using namespace std;
class strin{
    char *name;
    int len;
    public:
strin()
{
    name=new char[1];
    len=0;
}
strin(char y[],int x)
{len=x;
    name=new char[len];
    name=y;
}
strin(const strin &x,const strin &y)
{
    len=strlen(x.name)+strlen(y.name);
    name=new char[len+1];
    name=strcat(x.name,y.name);
    cout<<name;
}
strin(char *p){
len=strlen(p);
    name=new char[len+1];
    strcpy(name,p);
}
};
int main()
{char ss[]="KIIT";
 char sy[]="University";
    strin s1(ss,4);
    strin s2(sy,10);
    strin s3(s1,s2);
    return 0;
}