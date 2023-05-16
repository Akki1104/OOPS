#include<iostream>
using namespace std;

class Student{
	public:
		int rollNo;
		string name;
		float marks_rdbms;
		float marks_cpp;
		
		void message(){
			cout<<"\n\t\t\tDEVELOPED BY AKASH KUMAR\n"<<endl;
		}
		
		float total(){
			float sum = 0;
			sum= marks_rdbms + marks_cpp;
			return(sum);
		}
		
		float percentage(){
			float perc = 0;
			perc = (total()/200)*100;
			return(perc);
		}
		
		char grade(){
			float perc = percentage();
			
			if(perc > 80)
			  return('A');
			else if(perc <= 80 && perc > 65)
			  return('B');
			else if(perc <= 65 && perc > 50)
			  return('C');
			else if(perc <= 50 && perc > 40)
			  return('D');
			else 
			  return('F');
		}
		
		void display(){
			cout<<" "<<rollNo<<"\t\t"<<name<<"\t "<<total()<<"  \t"<<percentage()<<"\t\t"<<grade()<<endl;
		}
};

int main(){
	Student m;
	m.message();
	
	int n;
	cout<<"Enter number of Students: ";
	cin>>n;
	
	system("CLS");
	
	Student s[n];
	int i;
	
	for(i = 0;i < n;i++){
		cout<<"Enter Roll Number: ";
		cin>>s[i].rollNo;
		cout<<"Enter name: ";
		cin>>s[i].name;
		cout<<"Enter marks in RDBMS: ";
		cin>>s[i].marks_rdbms;
		cout<<"Enter marks in C++: ";
		cin>>s[i].marks_cpp;
		
		system("CLS");
	}
	
	cout<<"----------------------MARKSHEET----------------------\n"<<endl;
	
	cout<<" Roll Number\tName\tTotal\tPercentage\tGrade"<<endl;
	
	for(i = 0;i < n;i++)
	   s[i].display();
	   
	m.message();
}
