#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	int d,rev,temp;
	for(temp=n;temp>0;temp=temp/10){
		d=temp%10;
		rev=rev*10+d;
	}
	if(rev==n)
	  cout<<n<<" is a Palindrome number."<<endl;
	else
	  cout<<n<<" is not a Palindrome number."<<endl;
}
