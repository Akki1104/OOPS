#include<iostream>
using namespace std;

class Student{
	public:
		int rollNo;
		string name;
		float marks_cpp;
		float marks_rdbms;
		float percentage;
		
		void input(){
			cout<<"Enter Roll Number: ";
			cin>>rollNo;
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Marks in C++: ";
			cin>>marks_cpp;
			cout<<"Enter Marks in RDBMS: ";
			cin>>marks_rdbms;
			percentage=(marks_cpp+marks_rdbms)/200*100;
		}
		
		void display(){
			cout<<rollNo<<"\t\t"<<name<<"\t"<<marks_cpp<<"\t\t"<<marks_rdbms<<"\t\t"<<percentage<<"%"<<endl;
		}
		void topper(){
			cout<<"\nDetails of the Topper of the class: "<<endl;
			cout<<"Name\tMarks_C++\tMarks_RDBMS\tPercentage"<<endl;
			cout<<name<<"\t"<<marks_cpp<<"\t\t"<<marks_rdbms<<"\t\t"<<percentage<<"%"<<endl;
		}
};

int main(){
	Student s[5];
	int i,count=0;
	float per=0;
	cout<<"Enter details of Students: "<<endl;
	for(i=0;i<5;i++){
		s[i].input();
		if(per<s[i].percentage){
			per=s[i].percentage;
			count=i;
		}
		system("CLS");
	}
	
	cout<<"Displaying the details of the Students: "<<endl;
	cout<<"Roll Number\tName\tMarks_C++\tMarks_RDBMS\tPercentage"<<endl;
	for(i=0;i<5;i++)
		s[i].display();
	
	s[count].topper();
	return(0);
}
