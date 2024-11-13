//WAP to create an array of names. And perform searching operation too of any key element,
//If result is not found. display message not found otherwise display the indices where our key element is present.
#include<iostream>
using namespace std;
int main(){
	string name[5]={"ajay","vikas","sumit","vikas","danish"};
	string key;
	cout<<"enter key:";
	cin>>key;
	bool found=false;
	for(int i=0;i<=5;i++){
		if(name[i]==key)
		{
			cout<<"key present at index"<<i<<endl;
			found=true;
		}	
	}
	if(found==false){
		cout<<"Result: not found";
	}
	else{
		cout<<"Result: fount";
	}
}
