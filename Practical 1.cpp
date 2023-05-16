#include<iostream>
using namespace std;
int n;
int checkPalindrome(){
	int d,rev,temp=n;
	for(temp;temp>0;temp=temp/10){
		d=temp%10;
		rev=rev*10+d;
	}
	return rev;
}
void display(int r){
	r==n?cout<<n<<" is a Palindrome number."<<endl:cout<<n<<" is not a Palindrome number."<<endl;
}
int main(){
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	cout<<"Calling function checkPalindrome to check whether a number is Palindrome or not..."<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	display(checkPalindrome());
}
