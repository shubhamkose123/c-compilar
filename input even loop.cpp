
#include<iostream>
using namespace std;
int main(){
      int n,sum=0,num;
	  cout<<"enter range:";
	  cin>>n;
	  for(int i=1;i<=n;i++){
	  	cout<<"enter a numbar:";
	  	cin>>num;
	  	if(num%2==0) {
	  		even=even+num;
		  }
		  else{
		  	odd=odd=num;
		  }
	  	sum=sum+num;
	  }
	  cout<<"sum:"<<sum<<endl;
	  cout<<"even sum:"<<even<<endl;
	  cout<<"odd sum:"<<odd<<endl;	
}
