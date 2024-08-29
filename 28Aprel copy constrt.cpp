#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int age,*marks;
		public:
			Student(string n,int a,int m){
				name=n;
				age=a;
				marks=new int;
				*marks=m;
			}
			void display(){
				cout<<"name:"<<name<<" age: "<<age<<" marks:"<<*marks<<endl;
			}
			void change_dateil(int m){
				*marks=m;
			}
			Student(Student &obj){ //it is a copy constuctor
		    	name=obj.name;
				age=obj.age;
				marks=new int;
				*marks=*obj.marks;
			}
};
int main(){
	Student s("Aman",34,98);
	Student s1(s);
	s.display();
	s1.display();
	s1.change_dateil(60);
	s.display();
	s1.display();
	
}
