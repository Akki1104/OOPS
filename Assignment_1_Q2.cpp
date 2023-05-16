#include<iostream>
#include<math.h>
using namespace std;

class check{
	public:
		int checkPrime(int n){
			for(int i=1;i<=n/2;i++){
				return n%i==0? 1: 0;
			}
		}
		
		int checkArmstrong(int temp){
			int sum=0;
			for(temp;temp>0;temp=temp/10)
				sum=sum+pow(temp%10,3);
			return(sum);
		}
		
		int reverse(int temp){
			int rev=0;
			for(temp;temp>0;temp=temp/10)
				rev=rev*10+temp%10;
			return(rev);
		}
		
		int sumOfDigit(int temp){
			int sum=0;
			for(temp;temp>0;temp=temp/10)
				sum=sum+temp%10;
			return(sum);
		}
		
		int checkPalindrone(int temp){
			int rev=reverse(temp);
				return rev=temp? 1: 0;
		}
};

int main(){
	check c;
	
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	c.checkPrime(n)==1?cout<<"Prime Number"<<endl:cout<<"Not a Prime Number"<<endl;
	
	cout<<"Enter another number: ";
	cin>>n;
	c.checkArmstrong(n)==n?cout<<"Armstrong Number"<<endl:cout<<"Not an Armstrong Number"<<endl;
	
	cout<<"Enter another number: ";
	cin>>n;
	cout<<"Reverse of "<<n<<" is "<<c.reverse(n)<<endl;
	
	cout<<"Enter another number: ";
	cin>>n;
	cout<<"Sum Of Digits of "<<n<<" = "<<c.sumOfDigit(n)<<endl;
	
	cout<<"Enter another number: ";
	cin>>n;
	c.checkPalindrone(n)==1?cout<<"Palindrome Number"<<endl:cout<<"Not a Palindrome Number"<<endl;
}
