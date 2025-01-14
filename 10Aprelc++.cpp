#include<iostream>ca
using namespace std;
class Addition{
	private:
		int n1,n2;
		public:
			Addition(int a, int b){
				n1=a;
				n2=b;
				
			}
			void add_with_outsider(int a){
				cout<<a+n1+n2<<endl;
			}
			void add_with_outsider(double a){
				cout<<a+n1+n2<<endl;
			}
			
};
int main (){
	Addition obj(2,3);
	obj.add_with_outsider(78.9);
}
