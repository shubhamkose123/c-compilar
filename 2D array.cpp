//00  01  02  10  11  12  20  21  22  30  31  32
//m00 M01 M02 M10 M11 M12 M20 M21 M22 M30 M31 M32
//_____________________________________________________________________
//#include<iostream>
//using namespace std;
//int main(){
//	int marks[4][3]={12,44,5,6,77,8,99,4,55,89};
//	cout<<marks[1][1]<<endl;
//	cout<<marks[3][0]<<endl;
//	cout<<marks[3][1]<<endl;
//	
//	int marks[4][3] ={{12},{6},{99,4,55},89,90,90,999};  //error
//	cout<<marks[1][0];
//}

//
//_______________________________________________________________________
// wap a program to create to 2-d array and display them?
#include<iostream>
using namespace std;
int main(){
	int row,column;
	cout<<"enter row and column:";
	cin>>row>>column;   //4   //3
	int marks[row][column]; //marks[4][3]
	for(int i=0;i<row;i++){
		for(int j=0;i<column;j++){
			
			cout<<"enter data for index"<<i<<j<<":";
			cin>>marks[i][j];
		}
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			cout<<"marks at index"<<i<<j<<"="<<marks[i][j]<<endl;
		}
	}
	
}

