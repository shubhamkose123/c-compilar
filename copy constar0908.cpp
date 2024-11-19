//Copy Consctor
#include<iostream>
using namespace std;
class Game{
	private:
		string category;
		string status;
		int id;
		
	public:
		Game(string category,string status,int id){
			category=category;
			status=status;
			id=id;
	public:
		Game(string category,string status,int id){
			this->category=
		}
			
		
		void display(){
			cout<<"object id:"<<id<<endl;
			cout<<"category:"<<category<<"status:"<<status<<endl;
		}
};
int main(){
	Game obj1 ("team mate","killed",101);
	
	101
//	Game obj("team mate"),obj2("enemy");
//	obj.display();obj.display();
//	Game obj3=obj;
//	Game obj4=obj;
//	obj3.display();
//	obj4.display();
//	Game obj5(obj2);
	
	
}
