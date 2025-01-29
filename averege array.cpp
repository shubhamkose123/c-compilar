#include <iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"How many student in class:";
	cin>>n;
	int marks[n];     //{22,33,44,55,66,77};
	for(int i=0;i<n;i++){
		cout<<"Enter student marks:"<<i+1<<"=";
		cin>>marks[i];
		sum=sum+marks[i];
	}
	cout<<"Averege of array:"<<sum/(float)n;
}
