#include<iostream>
using namespace std;

struct Employee{
	int empId;
	string name;
	string section;
	int phoneNo;
};

void input(Employee e[]){
	cout<<"Enter Employee Details:\n"<<endl;
	for(int i=0;i<3;i++){
		cout<<"Employee "<<i+1<<": "<<endl;
		cout<<"Enter ID: ";
		cin>>e[i].empId;
		cout<<"Enter Name: ";
		cin>>e[i].name;
		cout<<"Enter Section: ";
		cin>>e[i].section;
		cout<<"Enter Phone Number: ";
		cin>>e[i].phoneNo;
		cout<<endl;
	}
}

void display(Employee e[]){
	cout<<"EMPLOYEE ID \tNAME \t\tSECTION \tPHONE NUMBER"<<endl;
	for(int i=0;i<3;i++){
		cout<<e[i].empId<<"\t\t"<<e[i].name<<"\t\t"<<e[i].section;
		for(int j=e[i].section.length();j<=10;j++)
			cout<<" ";
		cout<<"\t"<<e[i].phoneNo<<endl;
	}
}

int main(){
	Employee e[3];
	input(e);
	display(e);
}
