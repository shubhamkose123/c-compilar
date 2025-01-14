#include<iostream>
using namespace std;

class Employee{
	public:
	string name;
	int eid,year;
	double salary;
	char gender;	
	
	Employee(){
		name="";
		eid=0;
		year=0;
		salary=0;
		gender=' ';
		cout<<"constructor call";
	}
	else
	cout<<"sorry";
}
//		cout<<"employee id:"<<eid<<endl;
//		cout<<"name :"<<name <<"year of scrvice:"<<year<<endl;
//		cout<<"salary :"<<salary<<"gendar:"<<gender<<endl;
//	}
//	void promotion(){
//		if(year>5){
//			cout<<"congrats you got a promotion\n";
//			salary+=10000; // eska means salary=salary+10000
//			cout<<"now you are salary is:"<<salary;
//		}
//		else
//		cout<<"sorry\n";
//	}
//};

//	Employee e1,e2;
//	cout<<"enter id,name,gender,salary,exprience employee1:";
//	cin>>e1.eid>>e1.name>>e1.gender>>e1.salary>>e1.year;
//	cout<<"enter id,name,gender,salary,exprience employee2:";
//		cin>>e2.eid>>e2.name>>e2.gender>>e2.salary>>e2.year;
//		e1.display();
//		e2.display();
//		cout<<"\n\nemployee 1 promotionn datail\n";
//		e1.promotion();
//		cout<<"employee 2 promotion detail\n";
//		e2.promotion();
//	
	
//}
Employee (){
	cout <<"enter id,name,genter,slary,exprience employee:"
	
}
int main(){
	Employee e1(101,"ajay","m",9000,5);
	e1.display();
	e1.display();
}
