#include<iostream>
using namespace std;

class Employee{
public:
      void prepare_salary(){
      cout<<"salary prepare employee\n";
    }
       void promotion(){
       cout<<"if employee year>4 -->promotion\n";
    }
};
class Executive: public Employee{
public:
       void prepare_salary(){
       cout<<"salary prepare executive + salary +perks+shares+house..>\n";
    }
};
int main(){
//    executive excl;
//    excl.prepare_salary();
//    excl.promotion();

    //===================================================
    Employee *ptrobj; //bass pointer
    Executive obj;  //Exectuive object
    ptrobj=&obj;  
                 //Employee *ptrobj =new Executive
    ptrobj->prepare_salary();
    ptrobj->promotion();


}
