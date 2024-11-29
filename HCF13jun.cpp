//HCF................/
#include<iostream>
using namespace std;
int main(){
	
	int n1,n2,small;
	cout<<"enter 2 numbar:";
	cin>>n1>>n2;
	n1>n2? small=n2  :small=n1;
	//i=24; 24>=2;


	    for(int i=small;i>=2;i--){
	    if(n1%i==0 && n2%i==0){
		cout<<"HCF:"<<i<<endl;
		break;
		}
	}	
}
