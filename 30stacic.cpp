#include<iostream>
using namespace std;
class Bank{
	int balance;
	string name;
	static int count;
public:
    Bank(int bal, string nm){
    	balance=bal;
    	name=nm;
    	count++;
	}	
	void display(){
		 cout<<"Name:"<<name<<" Balance:"<<balance<<endl;
	}
	static void number_customer(){
		cout<<count;
	}
};
int Bank::count=0; 

int main(){
Bank obj(40000,"shubham"),obj2(40000,"shubham");
Bank::number_customer();	
	
}
