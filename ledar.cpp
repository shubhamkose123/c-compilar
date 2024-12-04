
#include<iostream>
using namespace std;
//syntax of if-else ladder
//if(condition1){
//	//body1
//}
//else if(condition2){
//	//body2
//}
//else if(condition3){
//	//body3
//}
//else if{
//
//}
int main(){
	int w_c;
	cout<<"enter ur water consumption:";
	cin>>w_c;
	
	if(w_c>45 && w_c<=75){
	cout<<"you have to pay = 475 ";	
	}
	
    else if(w_c>75 && w_c<=125){
	 cout<<"you have to pay = 750 ";	
	}
    else if(w_c>125 && w_c<=200){
	cout<<"you have to pay = 1225 ";	
	}
	 else if(w_c>200 && w_c<=350){
	cout<<"you have to pay = 1650 ";	
	}
    else if(w_c>350 ){
	cout<<"you have to pay = 2000 ";	
	}
	else{
		cout<<"u don't have to pay anything ";
	}
}

