//Q:-> wap to find out the addition of the 3 number
//#include<iostream>
//using namespace std;
//global space, global variable,class,structure......
// void add(int num1,int num2,int num3){
// 	cout<<"control goss to add()\n";
// 	cout<<"Addition:"<<num1+num2+num3<<endl;
// }
//int main(){
//	int number1,number2,number3;
//	cout<<"enter 3 numbears:";
//	cin>>number1>>number2>>number3;
//	add(number1,number2,number3);
//	cout<<"control back to main";
//}

#include<iostream>
using namespace std;

string palindrome(int num){
	int temp=num;
	int sum=0,last;
	while(num>0){
	last=num%10;
	sum=sum*10+last;
	num=num/10;
}
   if(sum==temp)
   return "yes";
   else
   return "no";	
	}
int main(){
	int number;
	cout<<"enter:";
	cin>>number;
    string result=palindrome(number);
    cout<<"result"<<result;
}
