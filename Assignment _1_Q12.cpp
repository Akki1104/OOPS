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

int linear(int n,int a[],int x){
	int count=0;
	for(int i=0;i<n;i++){
		if(x==a[i])
			count++;
	}
	return(count);
}

void display(int n,int a[],int x){
	cout<<"\nArray = [ ";
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i==n-1)
			cout<<" ]"<<endl;
		else
			cout<<", ";
	}
	cout<<"\n"<<x<<" is present "<<linear(n,a,x)<<" time in the given array."<<endl;	
}

int main(){
	int n;
	cout<<"Enter the size of Array: ";
	cin>>n;
	int a[n];
	a[n]=input(n,a);
	system("CLS");
	int x;
	cout<<"\nEnter any number: ";
	cin>>x;
	display(n,a,x);
}
