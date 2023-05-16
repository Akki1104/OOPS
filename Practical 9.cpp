#include<iostream>
using namespace std;

void calculateArea(int side){
	int area;
	area=side*side;
	cout<<"Area of Square is "<<area<<endl;
}

void calculateArea(int length,int breadth){
	int area;
	area=length*breadth;
	cout<<"Area of Rectangle is "<<area<<endl;
}

void calculateArea(float radius){
	float area;
	area=3.14*radius*radius;
	cout<<"Area of Circle is "<<area<<endl;
}

int main(){
	cout<<"Calling the calculateArea() with one argument to find the area of square."<<endl;
	calculateArea(10);
	cout<<"Calling the calculateArea() with two argument to find the area of rectangle."<<endl;
	calculateArea(10,20);
	cout<<"Calling the calculateArea() with one argument to find the area of circle."<<endl;
	calculateArea(5.5f);
	return(0);
}
