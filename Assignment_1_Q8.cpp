#include<iostream>
using namespace std;

int input(int n,int a[]){
	cout<<"\nEnter Elements int Array"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter Element "<<i+1<<": ";
		cin>>a[i];
	}
	return(a[n]);
}

void display(int n,int a[]){
	cout<<"\nElements present in Array : ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

int main(){
	int n;
	cout<<"Enter the size of Array: ";
	cin>>n;
	int a[n];
	a[n]=input(n,a);
	display(n,a);
}
