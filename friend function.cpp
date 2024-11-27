//friend function and friend class
#include<iostream>
using namespace std;
class Bank{
	private:
		int balance;
		string name;
	public:
	Bank(int bal,string nm){
		balance=bal;
		name=nm;
	}	
	void display(){
		cout<<"Name :"<<name<<" Balance:"<<balance<<endl;
	}
	friend class PhonePe;    //decleartion
	friend void f1(Bank &obj);
};
class PhonePe{
	public:
		void deposite(Bank &obj,int amount){
			obj.balance= obj.balance + amount ;
		}
		void withdraw(Bank &obj,int amount){
			obj.balance= obj.balance - amount;
		}
};
void f1(Bank &obj){
	cout<<obj.name<<endl;
}
int main(){
	Bank obj(4000,"Ajay");
	obj.display();
	PhonePe obj_phonepe;
	obj_phonepe.deposite(obj,8000);
	obj.display();
	
}
