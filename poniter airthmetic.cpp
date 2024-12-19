// pointer airthmetic
/*  #include<iostream>
    using namespace std;
    int main(){
          int number1=90,number2;
          int *ptr1=&number1,*ptr2=&number2;
          cout<<"Address of number 1:"<<ptr1<<endl;
          cout<<"Address of number 2:"<<ptr2<<endl;
 	
 	//ptr1=ptr1+1;
 	      ptr2=ptr2+1;
 	//cout<<"Address of number 1:"<<ptr1<<endl;
	//ptr1=ptr1+1;
	     cout<< "Address of number 1:"<<ptr1<<endl;   
       	cout<<"Address of number 2:"<<ptr2<<endl;
     	cout<<"Add of both :"<<*ptr1+*ptr2<<endl;	
}*/
/*______________________________________________________________*/
/*#include<iostream>
using namespace std;
int main(){
   char msg[]="pineapple";
   
   int count=0;
   char *ptr=msg;
   
   while(*ptr!='\0'){
        count++;
        ptr++;
   }
   cout<<"number of characters:"<<count<<endl;
}
________________________________________________________________*/

/*_______________________reference___________________________________*/
#include<iostream>
using namespace std;
int main(){
	int number1=99,number2=67;
	int &dight1=number1; //reference
	dight1=900;
	cout<<number1;
}
//--------------------------------
//     |int *ptr=&number1; |
//     |ptr=&number2;      |
//---------------------------------	

