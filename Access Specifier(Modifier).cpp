//_______________________Access Specifier(Modifier)_________________
/* by default all member of class are private 
 we cant take access of private member outside the class
________________________________________________________________
   Acess        within            within                outside
 specifier      class             child                 class
________________________________________________________________
 Private         yes                no                   no
 public          yes                yes                 yes
 protected       yes                yes                 yes
_______________________________________________________________*/
 /*#include<iostream>
 using namespace std;
  class Employee{
  	private:
  		int eid;
  	public:
	  void std_id(int id){
	  	eid=id;
	  }	
	  void get_id(){
	  	cout<<eid;
	  }
  	
  };
  int main(){
  	Employee el;
  	el.std_id(11110);
  	el.get_id();
  }*/
//________________________________visibility mode_________________________________________________
            /* parnt                                          child
             public                                         public
             protected             public  ->               protected
             
             
             
             public                                          protected 
            protected              protected ->              protected 
            
            
            
            
             public                                          private
            protected              private->                 private  */
            
            
/*#include<iostream>
using namespace std;
class parent{
	void f1(){
		cout<<"this is a private function f1 of class parent\n";
	}
	protected:
		void f2(){
		cout<<"this is a private function f1 of class parent\n";	
		}
	public:
	    void f3(){
	    	cout<<"this is a public function f3 of class parent\n";
		}			
    class child : public parent{
  	public:
  	void f4(){
  	f2(); 		
  }
  };		
};
int main(){
	chid obj;
	obj.f4();
}*/
//____________________________________________________________________________________
/*wap to create class university having data member,
university_name, address,session,number_of_streams,
number_of_college_affilated,
member function
parametrized constructor
setter(),getter()
create a chid class college having attribute
data member: college-name,address,nember_of_student
create a child claas student having attribute
data member: student_name , address.*/
#include<iostream>
using namespace std;
  //calling base class constructor in derived class
class university{
	private:
		string university_name;
		int number_of_college_affilated;
		public:
		university(string un,int numC){
			//cout<<"university";
			university_name=un;
			number_of_college_affilated=numC;
			cout<<"university";
		}	
};
class college : public university{
	protected:
		string college_name;
	
	  public:
	  	college(string un,int numC,string CN):university(un,numC){
	  		college_name=CN;
	  		cout<<"college\n";
		  }
};
class student : public college{
   	private:
     string student_name;
     public:
     	student(string un,int numC,string CN,string name):college(un,numC,CN){
     		student_name=name;
     		cout<<"student\n";
		 }
		 void display(){
		 	cout<<"university Name"<<university_name<<endl;
		 	cout<<"number of college Aff.:"<<number_of_college_affilated<<endl;
		 	cout<<"college Nmae:"<<college_name<<endl;
		 	cout<<"student Nmae:"<<student_name<<endl;
		 }
  };
int main(){
	student obj("RGPV",10000,"BANSAL","Ajay";)
	obj.display();
}



