#include<iostream>
#include<string>
using namespace std;

class LAB{
	public:
		string labName;
		int capacity;
		float length;
		float width;
		int totalC;
		float totalL;
		float totalW;
		float totalA;
		
		void message(){
			cout<<"\n-------------------DEVELOPED BY AKASH KUMAR---------------------\n"<<endl;
		}
		
		void input(){
			cout<<"\nEnter Dimensions of the "<<labName<<":"<<endl;
			cout<<"Length: ";
			cin>>length;
			cout<<"Width: ";
			cin>>width;
			cout<<"Capacity: ";
			cin>>capacity;
		}
		
		float area(){
			float area = 0;
			area = length * width;
			return(area);
		}
		
		void display(){
			cout<<"  "<<labName;
			for(int i = labName.length();i<=21;i++)
				cout<<" ";
			cout<<length<<"\t"<<width<<"\t"<<capacity<<"\t\t"<<area()<<endl;
		}
};

int main(){
	LAB l[4],m,t;
	
	l[0].labName = "I.T. Lab";
	l[1].labName = "Electronics Lab";
	l[2].labName = "Electrical Lab";
	l[3].labName = "Pharmacy Lab";
	
	int i;
	
	t.totalL = 0;
	t.totalW = 0;
	t.totalC = 0;
	t.totalA = 0;
	
	for(i = 0;i<4;i++){
		m.message();
		l[i].input();
		t.totalL = t.totalL + l[i].length;
		t.totalW = t.totalW + l[i].width;
		t.totalC = t.totalC + l[i].capacity;
		t.totalA = t.totalA + l[i].area();
		system("CLS");
	}
	
	cout<<"\n  Name of the Lab\tLength\tWidth\tCapacity\tArea"<<endl;
	
	for(i = 0;i<4;i++)
	   l[i].display();
	   
	cout<<"  Total\t\t\t"<<t.totalL<<"\t"<<t.totalW<<"\t"<<t.totalC<<"\t\t"<<t.totalA<<endl;
	
	m.message();
}
