/*#include<iostream>
using namespace std;
//Copy Constructor:
//1)shallow Copy
//2)depp copy
// by defold class having a sallow copy castctor vi need a crect and it shre address 
//of exit new on       classname objectname2(objectname)
class top
{
	int n;
	public:top(int a)
{	
n=a;
}
	void show ()
{
cout<<"account no="<<n<<"\n";	
}	
};
int main()
{
	top t1(78985);
	top t2(t1);//shallow copy
	t1.show();
	t2.show();
}*/
// Deep Copy
#include <iostream>
using namespace std;
#include<string.h>
class Top
{
	char *x;
	public:Top(char *n)
	{
		x=new char[20];
		strcpy(x,n);
	}
	void concat(char *s)
	{
		strcat(x,s);
	}
}
}
int main()
{
	top t1("shubham");
	top t2(t1);
	t1.show();
	t2.show();
	t2.concat("Kose")
}
