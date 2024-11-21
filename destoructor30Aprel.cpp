//Q.differense betwen shallow copy constructor
#include <iostream>
using namespace std;
class A{
	public:
		A(){
		cout<<"class A constructor\n";
		}
		~A(){
			cout<<"class A constructor\n";
		}
};
class B{
	public:
		B(){
		cout<<"class B constructor\n";
		}
		~B(){
			cout<<"class B constructor\n";
		}
};
class C:public B{
	public:
		C(){
		cout<<"class C constructor\n";
		}
		~C(){
			cout<<"class C constructor\n";
		}
};
int main(){
//	C c;
	A obj;
	B obj1;
}


