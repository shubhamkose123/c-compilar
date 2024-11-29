#include<iostream>
using namespace std;


int main(){
	int year;
	double salary,bonus;
	string name;
	cout<<"enter ur name:";
	cin>>name;
	cout<<"enter your of service and current salary:";
	cin>>year>>salary;
	cout<<"hello"<<name<<"your salary details\n";
	
	if(year>5){
		bonus=salary*(5.0/100);
		cout<<"total bonus:"<<bonus<<endl;
		cout<<"salary:"<<salary+bonus<<endl;
		
	}
	else{
		cout<<"total bonus:"<<0<<endl;
		cout<<"salary:"<<salary<<endl;
		
	}
}
