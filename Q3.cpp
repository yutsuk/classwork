#include<iostream>
using namespace std;

class Circle // 3 a
{
	private:
		double r;
	public:
		void setRadius(double radius)
		{
			r=radius; //defined into the class, so inlined by default
		}
		double getArea()
		{
			double A;
			A=(3.1415)*r*r;
			return A;
		}
};

class Pizza //3 b
{
	private:
		double p,s;
	public:
		void setPrice(double price);
		void setSize(double a);
		double costPerSqIn();
};
inline void Pizza::setPrice(double price) //inline declared outside class
{
	p=price;
}
inline void Pizza::setSize(double a) //defined outside the class, so explicit inline is needed
{
	s=a;
}
inline double Pizza::costPerSqIn()
{
	double cost;
	cost=p/s;
	return cost;
}
int main()
{
	double price,area,radiuss,price2;
	Circle Csize;
	cout<<"Enter the radius of pizza in inch = ";
	cin>>radiuss;
	Csize.setRadius(radiuss);
	area=Csize.getArea();
	Pizza myPizza;
	cout<<"Enter the price of pizza = ";
	cin>>price;
	myPizza.setPrice(price);
	myPizza.setSize(area);
	price2=myPizza.costPerSqIn();
	cout<<"Cost of pizza per square inch is = "<<price2;
}

