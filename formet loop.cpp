//Q.-> wap to finde out same of a natural numbar start form 1 and 
//also display the  givan formet
#include <iostream>
using namespace std;
int main (){
//	int n,sum=0;
//	cout<<"enter range:";
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cout<<i<<endl;
//		sum=sum+i;
//	}
//	cout<<"sum:"<<sum;
//	
//}
//==============================formet=================================================
	int n,sum=0;
	cout<<"enter range:";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i;
		if(i<n){
			cout<<"+";
		}
	   sum=sum+i;
    }
    cout<<"="<<sum;
}

