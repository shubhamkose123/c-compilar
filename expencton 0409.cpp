#include<iostream>
using namespace std;


int main(){
	int num1,num2;
	char choice='y';
	try{
		while(choice=='y'){
			cout<<"Enter your 2 number:";
			cin>>num1>>num2;
			if(num1+num2>100){
				throw num1+num2;
			}
			cout<< "Add: "<<num1+num2<<endl;
			cout<<"do you want to contine 'y' or 'e' :";
			cin>>choice;
			if(choice!='y' && choice!='e'){
				throw choice;
			}
		}
	}
	catch(int sum){
		cout<<"EXCEPTION:"<<sum<<" is greater then 100";
	}
	catch(char choice){
		cout<<"EXCEPTION:"<<choice<<" is not a valid choice";
	}
}

