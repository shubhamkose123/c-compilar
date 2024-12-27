//W.A..P to display only unique value in an array?
#include<iostream>
using namespace std;
int main(){
	int arr[5],j;
	cout<<"enter 5 records\n";
	for(int i=0;i<5;i++)
    {
		cin>>arr[i];
	}
	cout<<"\nResult of unique Values\n";
	for(int i=0;i<5;i++)
		{
		for(int j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			{
				break;
			}
		}
			if(i==j)
			{
				cout<<arr[j]<<"\t";
			}
		}
	}
	
