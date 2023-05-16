#include<iostream>
using namespace std;

void displayArray(int n,int arr[]){
	cout<<"Elements in array are: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<endl;
	
	int a[n];
	cout<<"Enter Elements in array: "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	displayArray(n,a);
	return(0);
}
