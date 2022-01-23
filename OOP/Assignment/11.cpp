#include<iostream>
#include<iomanip>
using namespace std;
class details{
    char name[20],code[20];
    int price, quantity, total=0;
    int a;
    public:
    void assign()
    {
        cout<<"Enter the code: "<<endl;
        cin>>code;
        cout<<"Enter the name: "<<endl;
        fflush(stdin);
        gets(name);
        cout<<"Enter the quantity: "<<endl;
        cin>>quantity;
        cout<<"Enter the price: "<<endl;
        cin>>price;
        a=price*quantity;
    }
    int calculate(){
        total=(price*quantity);
        return total;
    }
    void dis(int sl)
    {
        cout<<left<<setw(10)<<sl<<left<<setw(10)<<code<<left<<setw(10)<<name<<left<<setw(10)<<price<<left<<setw(10)<<quantity<<left<<setw(10)<<a<<endl;
        sl++;
    }
    void f()
    {
        cout<<total;
    }
};
int main()
{int n=1;int c=0;
    details l[11];
    for(int i=0;i<3;i++)
    {
        l[i].assign();
       c=c+l[i].calculate();
    }
 cout<<left<<setw(10)<<"Sl."<<left<<setw(10)<<"Code"<<left<<setw(10)<<"Name"<<left<<setw(10)<<"Price"<<left<<setw(10)<<"Quantity"<<left<<setw(10)<<"Total"<<endl;
     for(int i=0;i<3;i++)
    {
        l[i].dis(n);
        n++;
    }
    cout<<right<<setw(60)<<"Total: "<<c<<endl;
return 0;  
}