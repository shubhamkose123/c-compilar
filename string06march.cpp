#include <iostream>
using namespace std;
int main(){
	string st="apple";   
	string st1="apple";
	int result=st.compare(st1);
	cout<<result;
	//lexicographical comparision on the bassis of ascii of value
	//a=97 ,b=98
	//compare()-->int output 
	//pasitive--->st>st1
	//negative-->st<st1
	//zero-->same

}
