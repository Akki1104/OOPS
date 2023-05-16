#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	int temp=n,count=0;
	while(temp>0){
		temp=temp/10;
		++count;
	}
	if(count==1)
	  cout<<n<<" is a single digit number."<<endl;
	else if(count==2)
	  cout<<n<<" is a double digit number."<<endl;
	else
	  cout<<n<<" is beyond asked range."<<endl;
}
