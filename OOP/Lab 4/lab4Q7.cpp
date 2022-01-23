#include<iostream>
using namespace std;
class DM; // meter-centimeter
class DB  //feet-inch
{
private:
	int feet;
	int inch;
public:
	void input(int f,int i)
	{
		if(i>=12)
        {
			feet=f+i/12;
			inch=i%12;
		}
		else
	    {
			feet=f;
			inch=i;
	    }

	    //conversion strats
	feet =feet*3.281;// converted to meter
	inch=inch*2.54;//converted to centimeter
	if(inch>100)
	{
		feet=feet+inch/100;
		inch=inch%100;
	}
	   //conversion end

	}
	friend void add(DM v,DB w);

};
class DM
{
private:
	int meter;
	int centimeter;
public:
	void input(int m,int cm)
	{
		if(cm>100)
		{
			meter=m+cm/100;
			centimeter=cm%100;
		}
		else
		{
		   meter=m;
		   centimeter=cm;
		}

	}
	friend void add(DM v,DB W);
};

void add(DM v, DB w)
{
	int fm,fcm;
	fm=w.feet+v.meter;
	fcm=w.inch+v.centimeter;

	if(fcm>100)
	{
		fm=fm+fcm/100;
		fcm=fcm%100;
	}
	cout<<"after adding:"<<endl;
	cout<<"meter: "<<fm<<"  centimeter: "<<fcm;
}
int main()
{
	DB db;
	DM dm;
	db.input(50,24);
	dm.input(2,120);
	add(dm,db);
	return 0;
}