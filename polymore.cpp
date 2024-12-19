#include<iostream>
using namespace std;
void add(int number1,int number2){
	cout<<"with int,int \n";
	cout<<"Addition: "<<number1+number2<<endl;
}
void add(double number1,int number2){
	cout<<"with double,int \n";
	cout<<"Addition: "<<number1+number2<<endl;
}
void add(double number1,int number2,int number3){
	cout<<"with double,int \n";
	cout<<"Addition: "<<number1+number2+number3<<endl;
}
int main(){
	add(2.4,3);
}
//__________________________________________________________________
//#include<iostream>
//using namespace std;
//class ConcatenateAddition{
//	public:
//		void add(int num1,int num2){
//		cout<<"Add:"<<num1+num2<<endl;
//		}
//		void add (string s1, string s2){
//			cout<<"Add:"<<s1+s2<<endl;
//		}
//};
//int main(){
//	ConcatenateAddition obj;
//	obj.add(2,3);
//	obj.add("function ","overloading");
//}
