#include<iostream>
using namespace std;

class A{
	public:
		int a;
		int b;
		
		void sum(){
			cout<<"sum of "<<a<<" & "<<b<<" = "<<a+b<<endl;
		}
};

class B:public A{
	public:
		void subtract(){
			cout<<"Subtraction of "<<a<<" & "<<b<<" = "<<a-b<<endl;
		}
};

int main(){
	B obj;
	obj.a=20;
	obj.b=10;
	obj.sum();
	obj.subtract();
}

