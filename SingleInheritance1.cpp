#include<iostream>
using namespace std;

class sum{
	public:
		float a;
		float b;
		float c;
		
		float add(){
			return(a+b+c);
		}	
};

class avg: public sum{
	public:
		
		float average(float s){
			return(s/3);
		}
		
		void display(){
			float s=add();
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
			cout<<"\nSum = "<<s<<endl;
			cout<<"\nAverage = "<<average(s)<<endl;
		}
};

int main(){
	avg a;
	cout<<"Enter the first number: ";
	cin>>a.a;
	cout<<"Enter the second number: ";
	cin>>a.b;
	cout<<"Enter the third number: ";
	cin>>a.c;
	cout<<endl;
	
	a.display();
}
