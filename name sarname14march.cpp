#include<iostream>
using namespace std;
fullname(string name ,string surname){ //formal
cout<<name+" "+surname;
}


int main (){
	string name,surname;
	cout<<"enter name and surname";
	cin>>name>>surname;
	fullname(name,surname);
}
