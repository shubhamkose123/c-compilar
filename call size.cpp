/*#include<iostream>
using namespace std;

void increment_10(int Arr[],int size){
	for(int i=0;i<size;i++){
		Arr[i]=Arr[i]+10;
	}
	 
}
int main(){
	int arr[]={34,5,66,7,8,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	increment_10(arr,size);  //we actually pass bose address (behave as call bu refereance)
	for(int i=0;i<size;i++){  //size paasing behave as call by value.
		cout<<arr[i]<<" ";
	}
}*/
//___________________________________________________________________________
// wap to increment all the aliment of arry using poniter

#include<iostream>
using namespace std;

void increment_10(int arr[],int size){
	int *p=arr;
	for(int i=0;i<size;i++){
		Arr[i]=p[i]+10;
	}
	 
}
int main(){
	int arr[]={34,5,66,7,8,8};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	increment_10(arr,size);  //we actually pass bose address (behave as call bu refereance)
	for(int i=0;i<size;i++){  //size paasing behave as call by value.
		cout<<arr[i]<<" ";
	}
}
	
	
	
	
	
	
	

