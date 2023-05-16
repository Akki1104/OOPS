#include<iostream>
using namespace std;

void fibo(int a,int b,int n){
	if(n>0){
		cout<<" "<<a+b;
		fibo(b,a+b,n-1);
	}
}

int main(){
	int n;
	cout<<"Enter the limit of the Series: ";
	cin>>n;
	cout<<"\nFibonacci Series: 0 1";
	fibo(0,1,n-2);
}
