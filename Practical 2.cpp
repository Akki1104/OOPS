#include<iostream>
using namespace std;
int year;
int checkLeap(){
	if(year%4==0&&year%100!=0)
	  return 0;
	else if(year%400==0)
	  return 1;
	else
	  return 0;
}
void display(int flag)
{
	flag==1?cout<<year<<" is a Leap year."<<endl:cout<<year<<" is not a Leap year."<<endl;
}
int main(){
	cout<<"Enter a year: ";
	cin>>year;
	cout<<endl;
	cout<<"Calling function checkLeap to check whether a year is Leap year or not..."<<endl;
	cout<<"-------------------------------------------------------------------------"<<endl;
	display(checkLeap());
}
