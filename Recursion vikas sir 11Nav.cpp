/*-------------(Recursion)--------------
Function Calling it Self Called Recursion 
There are Two Type of Recursion
1) Head Recursion
2)Tail Recursion
_____________________________________________________________________
#include<iostream>
using namespace std;
int cybrom(int a)
{
 if(a<1)	
{
     return a;
}
cout<<a<<"\n";
cybrom(a-1);
cout<<a<<"\n";
}
int main()
{
	cybrom(5);
}*/
//wap to create a table of any number using recursion?
/*#include<iostream>
using namespace std;

void table(int num, int i = 1) {
    if (i <= 10) {
        cout<<num<<" * "<<i<<" = "<<num * i<<endl;
        table(num,i+1);
    }
}
int main()
{
	int num;
    cout << "Enter a number: ";
    cin >> num;
    table(num);

}*/
//
/*#include<iostream>
using namespace std;
int factorial(int n){
	if(n <=1){
		return 1;
	}else{
		return n * factorial(n -1);	
	}
}
int main(){
	int n;
	cout << "Enter a number: ";
	cin>>n;
	cout<<"factorial of"<< n <<" = "<<factorial(n)<<endl;	
}*/
#include<iostream>
using namespace std;
int fact(int a)
{
	if(a==1)
{
return 1;	
}
return fact(a-1)*a;
}
int main()
{
	int n;
	cout<<"enter any no to generate factorial\n";
	cin>>n;
	cout<<fact(n);
}

