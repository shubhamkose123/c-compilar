//leap year:=>
//2000 2004 2008......2024.....2096 2100 NLY                                     
//2104 2108..................  2196 2200 NLY
//2204 2208..................  2296 2300 NLY
//2304 2308  ..................2396 2400 LY
//1) divisible by 4 and not divisible by 100
//2)divisible by 400
#include<iostream>
using namespace std;
int main(){
     int year;
     cout<<"enter year:";
     cin>>year;
     if((year%4==0 && year%100!=0)|| year%400==0){
     	cout<<year<<"is a leap year";
     	
	 }
	 else{ 
	      cout<<year<<"is not a leap year";
	      
	 }
}
	
