#include<iostream>
using namespace std;

class customerBill{
	public:
		int itemId;
		string itemName;
		float quantity;
		float price;
		
		void input(){
			cout<<"Enter the Item ID: ";
			cin>>itemId;
			cout<<"Enter the Item name: ";
			cin>>itemName;
			cout<<"Enter the quantity of item: ";
			cin>>quantity;
		}
		
		void displayBill(){
			cout<<itemId<<"\t\t "<<itemName;
			for(int i=itemName.length();i<=10;i++)
				cout<<" ";
			cout<<"\t "<<quantity<<"\t\t "<<price<<"\t\t "<<quantity*price<<endl;
		}
};

int main(){
	customerBill b[3];
	
	int i;
	float totalBill=0;
	
	b[0].price=30;
	b[1].price=100;
	b[2].price=150;
	
	for(i=0;i<3;i++){
		b[i].input();
		totalBill=totalBill+(b[i].quantity*b[i].price);
		cout<<endl;
	}
	 
	cout<<"----------------------------CUSTOMER COPY----------------------------"<<endl;
	cout<<"ITEM ID\t\t ITEM NAME\t QUANTITY\t PRICE\t\t TOTAL"<<endl;
	for(i=0;i<3;i++)
		b[i].displayBill();
		
	cout<<"\t\t\t\t TOTAL BILL \t\t\t "<<totalBill<<endl;
	
	return(0);
}
