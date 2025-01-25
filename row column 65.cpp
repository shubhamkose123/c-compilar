#include <iostream>
using namespace std;

int main(){
int row,column;
cout<<"enter row and column:";
cin>>row>>column;
int a[row][column];   //de
for(int i=0;i<row;i++){
	for (int j=0;j<column;j++){
		cout<<"enter the value for index"<<i<<j<<":";
		cin>>a[i][j];
		
	}
}
 for(int i=0;i<row;i++){
for (int j=0;j<column;j++){
		cout<<" the value at index"<<i<<j<<":"<<a[i][j]<<endl;
	}
    }
    cout<<"matrix representation\n";
    for(int i=0;i<row;i++){
    	for(int j=0;j<column;j++){
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
