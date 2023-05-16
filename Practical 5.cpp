#include<iostream>
using namespace std;

int sumOfArray(int n,int arr[]){
	if(n<0)
		return(0);
	else
		return(arr[n]+sumOfArray(n-1,arr));
}

void display(int n,int arr[]){
	cout<<"\nArray = [ ";
	for(int i=0;i<n;i++){
		cout<<arr[i];
		if(i==n-1)
			cout<<" ]"<<endl;
		else
			cout<<", ";
	}
	
	cout<<"\nSum of all array elements = "<<sumOfArray(n,arr)<<endl;
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
		
	display(n,a);
	return(0);
}
