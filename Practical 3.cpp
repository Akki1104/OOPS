#include<iostream>
using namespace std;

int check(int temp){
	int count=0;
	while(temp!=0){
		++count;
		temp=temp/10;
	}
	return(count);
}

void display(int n){
	int count=check(n);
	if(count==1)
	  cout<<n<<" is a single digit number."<<endl;
	else if(count==2)
	  cout<<n<<" is a double digit number."<<endl;
	else
	  cout<<n<<" is beyond asked range."<<endl;
}

int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	display(n);
}
