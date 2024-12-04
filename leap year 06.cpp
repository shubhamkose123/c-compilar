#include<iostream>
using namespace std;

int main (){
    int amount,note;
	cout<<"enter amount:";
	cin>>amount;
	if(amount/2000>=1){ //2450/2000 ===0
	 	note=amount/2000;
	 	cout<<"2000:"<<note<<endl;//2000-1
	 	amount=amount-2000*note;//amount=24500-2000*1=450
	 	
	 	    if(amount/500>=1){
	 		note=amount/500;
	 		cout<<"500:"<<note<<endl;
	 		amount=amount-500*note;
	 		
	        if(amount/200>=1){
          	note=amount/200;
            cout<<"200:"<<note<<endl;
         	amount=amount-200*note;
	
	        if(amount/100>=1){
	 		note=amount/100;
	 		cout<<"100:"<<note<<endl;
	 		amount=amount-100*note;
	 		
	 		if(amount/50>=1){
	 		note=amount/50;
	 		cout<<"50:"<<note<<endl;
	 		amount=amount-50*note;
	 		
	 		if(amount/20>=1){
	 		note=amount/20;
	 		cout<<"20:"<<note<<endl;
	 		amount=amount-20*note;
	 		
	 		if(amount/10>=1){
	 		note=amount/10;
	 		cout<<"10:"<<note<<endl;
	 		amount=amount-10*note;
	 		
	 		if(amount/5>=1){
	 		note=amount/5;
	 		cout<<"5:"<<note<<endl;
	 		amount=amount-5*note;
	 		
	 		if(amount/2>=1){
	 		note=amount/2;
	 		cout<<"2:"<<note<<endl;
	 		amount=amount-2*note;
	 		
	 		if(amount/1>=1){
	 		note=amount/1;
	 		cout<<"1:"<<note<<endl;
	 		amount=amount-1*note;
	 	}
	 	}
	 	}
	   }
	  }
	 }
	}
   }
  }
 }
}

