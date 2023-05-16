#include<iostream>
using namespace std;

class dimensions{
	public:
		float length;
		float width;
		float height;
		
		dimensions(){
			cout<<"Default Constructor is called:"<<endl;
			length=0;
			width=0;
			height=0;
		}
		
		dimensions(float l){
			cout<<"\nConstructor having one parameter is called:"<<endl;
			length=l;
			width=0;
			height=0;
		}
		
		dimensions(float l,float w){
			cout<<"\nConstructor having two parameters is called:"<<endl;
			length=l;
			width=w;
			height=0;
		}
		
		dimensions(float l,float w,float h){
			cout<<"\nConstructor having three parameters is called:"<<endl;
			length=l;
			width=w;
			height=h;
		}
		
		void display(){
			cout<<"Length : "<<length<<endl;
			cout<<"Width : "<<width<<endl;
			cout<<"Height : "<<height<<endl;
		}
};

int main(){
	dimensions d1;
	d1.display();
	dimensions d2(10.5f);
	d2.display();
	dimensions d3(10.5f,20.5f);
	d3.display();
	dimensions d4(10.5f,20.5f,30.5f);
	d4.display();
	return(0);
}
