#include<iostream>
using namespace std;
#include<string.h>
int main ()
{
char c[10];
char v[10];
cout<<"enter pwd\n";
cin>>c;
cout<<"re enter pwd\n";
cin>>c;
if(strcmp(c,v)==0)
{
	cout<<"pwd matched";
}
else
{
cout<<"pwd not matched";
}
cout<<"name="<<c<<"\n";
cout<<"reverse="<<strrev(c)<<"\n";
cout<<"langth="<<strlen(c)<<"\n";
cout<<"upper letter="<<strupr(c)<<"\n";
cout<<"small letter="<<strlwr(c)<<"\n";
cout<<"marge="<<strcat(c,v)<<"\n";
strcpy(c,v);
cout<<"name="<<c<<"\n";
cout<<"surname="<<v<<"\n";
}
