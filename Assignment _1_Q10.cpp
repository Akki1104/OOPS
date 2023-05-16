#include<iostream>
using namespace std;

int input(int n,int a[]){
	cout<<"\nEnter Elements int Array"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter Element"<<i+1<<": ";
		cin>>a[i];
	}
	return(a[n]);
}

int sum(int n,int a[]){
	int sum=0,i;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	return(sum);
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
	
	cout<<"\nSum of all elements in array = [ "<<sum(n,a)<<" ]"<<endl;
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
