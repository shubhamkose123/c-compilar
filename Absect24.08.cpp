//wap to create a abstract class name RBI having pure vritual
//function interrest rate a create sum child class name PNB,SBI?
#include<iostream>
using namespace std;
class RBI{
	public:
		virtual void interest()=0;
		virtual void repo_rate()=0;
		void info(){
			cout<<"RBI regulate all financial institution\n";
		}
};
class SBI:public RBI{
	public:
		void interest_rate(){
		cout<<"SBI interest rate , 7 % ";	
		}
		void repo_rate(){
			cout<<"SBI repo rate , 10 % ";
		}
};

int main(){
	RBI *base_pointer;
	SBI sbiobj;
	base_pointer=&sbiobj;
	base_pointer->interest_rate();
	base_pointer->repo_rate();
	base_pointer->info();
	
}