#include<iostream>
using namespace std;

class Rectangle
{
	private:
		double l,w;
	public:
		void setLength(double length)
		{
			l=length;		//defined into the class, so inlined by default
		}
		void setWidth(double width)
		{
			w=width;
		}
		double getArea()
		{
			double A;
			A=l*w;
		}
};

class Carpet
{
	private:
		double ppsf,size;
	public:
		void setPricePerQsqft(double p)
		{
			ppsf=p;	//defined into the class, so inlined by default
		}
		void setdimensions(double length,double width)
		{
			size=length*width;
		}
		double getTotalPrice()
		{
			double t;
			t=ppsf*size;
			return t;
		}
};
int main()
{
	double pr,a,length,width;
	Carpet c;
	Rectangle r;
	cout<<"Enter price per square feet of carpet = ";
	cin>>pr;
	c.setPricePerQsqft(pr);
	cout<<"Enter length and width of rectangle = ";
	cin>>length>>width;
	c.setdimensions(length,width);
	cout<<"Total price of carpet is ="<<c.getTotalPrice()<<endl;
}
