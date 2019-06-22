#include<iostream>
using namespace std;

double compute(double b,int a=10,long c=85488)
{
	double sum;
	sum=a+b+c;
	return sum;
}
int main()
{
	cout<<"Sum is = "<<compute(10.780698,11,11111)<<endl;
	cout<<"Sum is = "<<compute(12.658695,13)<<endl;
	cout<<"Sum is = "<<compute(263.59)<<endl;
}
