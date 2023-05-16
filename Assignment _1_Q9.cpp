#include<iostream>
using namespace std;

int input(int n,int a[]){
	cout<<"\nEnter Elements in Array"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter Element "<<i+1<<": ";
		cin>>a[i];
	}
	return(a[n]);
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
	
	cout<<"\nReverse Array = [ ";
	for(int i=n-1;i>=0;i--){
		cout<<a[i];
		if(i==0)
			cout<<" ]"<<endl;
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
