/*#include<iostream>
using namespace std;
int main(){
	int num,sum=0,last,temp;
	cout<<"enter test numbar:";
	cin>>num;
	temp=num; 
	//loop-->digit count =>c3,4,5       
	while(num>0){
	last=num%10;
	sum=sum+last*last*last;        //pow(last,c);
	num=num/10;	
     }
	if(temp==sum){
		cout<<"it is a armstrong numbar";
	}
	else{
		cout<<"it is not a armstrong numbar";
	}
}*/

//wap  to calaculer the same of indijival same of digit of numbar
#include<iostream>
using namespace std;
int main(){
	int num,sum=0,last,temp;
	cout<<"enter test numbar:";
	cin>>num;
	temp=num; 
	//loop-->digit count =>c3,4,5       
	while(num>0){
	last=num%10;
	sum=sum+last;        //pow(last,c);
	num=num/10;	
     }

}

