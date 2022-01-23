#include <iostream>                                        
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
class book
{
string name;
string author;
float price;
int stock;
public:
void getdata()
{
cout<<"enter the name of the book - ";
getline(cin,name);
cout<<"enter the name of the author - ";
getline(cin,author);
cout<<"enter the price of the book - ";
cin>>price;
cout<<"enter the stock no. of book - ";
cin>>stock;
}
void manipulate(book x[] , int n)
{
	string s;
	cout<<"hello customer"<<endl;
	cout<<"which book do you want?";
	cin>>s;
	int counter=0;
	for(int j=0;j<n;j++)
	{ counter++;
		if(s.compare(x[j].name)==0)
		{
			int cn=0;
			cout<<"the book is available"<<endl;
			cout<<"It is written by - "<<x[j].author<<endl;
                        cout<<"The price is - "<<x[j].price<<endl;
			cout<<"how many copies do you want - ";
			cin>>cn;
			if(cn<=x[j].stock)
			{
				cout<<"your total amount is - "<<cn*x[j].price<<endl;
				cout<<"enjoy your book😊"<<endl;
				break;
			}
	          else
	          cout<<"sorry , the no. of copies you have requested is not in stock    -"<<endl;
			  break;
		}
	}
		if(counter>n-1)
		{
			cout<<"the reqested book is not available."<<endl;
		
		}
	
}
};
int main()
{
int n;
cout<<"enter the no. of books - ";
cin>>n;
cin.get();
book x[n];
for(int i=0;i<n;i++)
{
x[i].getdata();
cin.get();
}
book c;
c.manipulate(x,n);
}