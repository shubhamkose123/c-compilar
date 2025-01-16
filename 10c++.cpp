#include<iostream>
using namespace std;
void add(int a,int b){
	cout<<a+b<<endl;
	cout<<"int int \n";	
}

void add(double a,int b){
	cout<<a+b<<endl;
	cout<<"double int \n";	
}

int main(){
	add(45.6,90.9);
	
}
