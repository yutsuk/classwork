#include<iostream>
using namespace std;

float bill(int a, float b, float c, float d) //in patient
{
	float s;
	s=(a*b)+c+d;
	return s;
}
float bill(float c, float d) // out patient
{
	return(c+d);
}
int main()
{
	int a,x;
	float b,c,d,t;
	cout<<"Enter the patient type:\n1-In patient\n2-Out patient\n";
	cin>>x;
	if(x==1)
	{
		cout<<"Enter the no. of days spent = ";
		cin>>a;
		cout<<"Enter the daily rate = ";
		cin>>b;
		cout<<"Enter charges for hospital services = ";
		cin>>c;
		cout<<"Enter hospital medication charges = ";
		cin>>d;
		if(a>0&&b>0&&c>0&&d>0)
		{
			t=bill(a,b,c,d); //in patient
			cout<<"The total costs is = "<<t<<endl;
		}
		else
		{
			cout<<"You cannot enter negative value!!";
		}
	}
	else if(x==2)
	{
		cout<<"Enter charges for hospital services = ";
		cin>>c;
		cout<<"Enter hospital medication charges = ";
		cin>>d;
		if(c>0&&d>0)
		{
			t=bill(c,d); // out patient
			cout<<"The total costs is = "<<t<<endl;
		}
		else
		{
			cout<<"You cannot enter negative value!!";
		}
	}
	else
	{
		cout<<"Input Error!!"<<endl;
	}
}

