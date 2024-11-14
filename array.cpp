//#include<iostream>
//using namespace std;
//int main(){
//int n;
//cout<<"enter n:";
//cin>>n; //3
//int marks[n];
//for(int i=0;i<n;i++){
//	cout<<"enter marks of student stored at index "<<i<<":";
//	cin>>marks[i];
//}
//for(int i=0;i<n;i++){
//	cout<<"marks of student stored at index "<<i<<":"<<marks[i]<<endl;
//}
//}


//#include<iostream>
//using namespace std;
//int main(){
//int n;
//cout<<"enter n:";
//cin>>n; //3
//int marks[n];
//for(int i=0;i<n;i++){
//	cout<<"enter marks of student stored at index "<<i<<":";
//	cin>>marks[i];
//}
//for(int i=n-1;i>=0;i++){
//	cout<<"marks of student stored at index "<<i<<":"<<marks[i]<<endl;
//}
//}


//#include<iostream>
//using namespace std;
//int main(){
//int n,sum=0;
//cout<<"enter n:";
//cin>>n; //3
//int marks[n];
//for(int i=0;i<n;i++){
//	cout<<"enter marks:";
//	cin>>marks[i];
//	
//}
//for(int i=0;i<n;i++){
//	cout<<marks[i]<<" ";
//	sum=sum+marks[i];
//}
//cout<<"add:"<<sum<<endl;
//cout<<"avreage:"<<sum/(float)n;
//}


//WAP to create an array with n even elements. (hint: use while loop instead of for)
//#include<iostream>
//using namespace std;
//int main(){
//int n, temp,i=0;
//cout<<"enter limit:";
//cin>>n;
//int arr[n];
//while(i<n){
//	cout<<"enter number:";
//	cin>>temp;
//	if(temp%2==0){
//		arr[i]=temp;
//		i++;
//	}
//}
//for(int i=0;i<n;i++){
//	cout<<"enter even number arr:"(i)<<endl;
//}

// Q->Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.
// Example 1:
//Input: nums = [0,1,0,3,12] Output: [1,3,12,0,0]
//Example 2:
//Input: nums = [0] Output: [0]
#include<iostream>
using namespace std;
int main(){
int arr[5]={0,1,0,3,12};
int j=0;
for(int i=0;i<5;i++){
	if(arr[i]!=0){
		arr[j]=arr[i];
		j++;
	}
	}
while(j<5){
	arr[j]=0;
	j++;
}	
	
}

	
	
	
	
	
	
	
	
	
	
	
	
	

