#include<iostream>
using namespace std;
int sbi (int code,int pwd)
{
	return 1000;
}
int axis(int code,int pwd)
{
	return 2000;
}
int main()
{
	int(*atm) (int,int);
	atm=sbi;
	cout<<"main balance of sbi"<<atm(1001,1234)<<"\n";
	atm=axis;
	cout<<"main balance of axis"<<atm(2001,4567)<<"\n";
}
