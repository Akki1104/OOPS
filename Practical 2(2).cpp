#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter a year: ";
	cin>>year;
	cout<<endl;
	if(year%4==0&&year%100!=0)
	  cout<<year<<" is a Leap year."<<endl;
	else if(year%400==0)
	  cout<<year<<" is a Leap year."<<endl;
	else
	  cout<<year<<" is not a Leap year."<<endl;
}
