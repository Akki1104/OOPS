#include<iostream>
using namespace std;

int checkDigit(int n){
	int temp=n,count=0;
	while(temp>0){
		temp=temp/10;
		++count;
	}
	return(count);
}

void display(int n){
	int c=checkDigit(n);
	if(c==1)
	  cout<<n<<" is a single digit number."<<endl;
	else if(c==2)
	  cout<<n<<" is a double digit number."<<endl;
	else
	  cout<<"It is beyond the asked range."<<endl;
}

int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	
	display(n);
}
