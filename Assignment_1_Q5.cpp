#include<iostream>
#include<string>
using namespace std;

float charges(float unit){
	if(unit<=100)
		return(50+0.60*unit);
	else if(unit>100 && unit<=200)
		return(50+0.80*unit);
	else
		return(50+0.90*unit);
}

void display(string name,float unit,float amt){
	cout<<"Name\t\tUnit\tTotal Amount"<<endl;
	cout<<name;
	for(int i=name.length();i<=15;i++)
		cout<<" ";
	cout<<unit<<"\tRs."<<amt<<endl;
}

int main(){
	string name;
	float unit;
	
	cout<<"Enter Name of the User: ";
	getline(cin,name);
	cout<<"Enter number of Units: ";
	cin>>unit;
	
	float amt=0;
	amt=charges(unit);
	if(amt>300)
		display(name,unit,amt+amt*0.15);
	else
		display(name,unit,amt);
}
