#include<iostream>
using namespace std;

int input(int n,int a[]){
	cout<<"\nEnter Elements int Array"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" Element: ";
		cin>>a[i];
	}
	return(a[n]);
}

int check(int a){
	return a%2==0? 1: 0;
}

void display(int n,int a[]){
	cout<<"\nArray = [ ";
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i==n-1)
			cout<<" ]"<<endl;
		else
			cout<<", ";
	}
	
	cout<<"\nOutput: ";
	for(int i=0;i<n;i++){
		if(check(a[i])==1)
			cout<<a[i]<<"(EVEN)";
		else
			cout<<a[i]<<"(ODD)";
		if(i==n-1)
			cout<<endl;
		else
			cout<<", ";
	}
}

int main(){
	int n;
	cout<<"Enter the size of Array: ";
	cin>>n;
	int a[n];
	a[n]=input(n,a);
	system("CLS");
	display(n,a);
}
