//polymorphism:
#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
		double marks;
		public:
			student(){
				cout<<"Enter Roll No,Name,Marks:";
				cin>>roll>>name>>marks;
			}
			
};
int main(){
	int n;
	cout<<"How many record do u want to insert:";
	cin>> n;
	student s[n];
	for(int i=0;i<n;i++){
		cout<<"name:"<<s[i].name<<endl<<"roll:"<<s[i].roll<<endl<<"marks"<<s[i].marks<<endl;
	}
	int high =s[0].marks;
	for(int i=1;i<n;i++){
		if(s[i].marks>high)
		high=s[i].marks;
	}
	
}

