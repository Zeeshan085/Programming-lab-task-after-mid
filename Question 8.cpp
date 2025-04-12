#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter year: "<<endl;
	cin>>a;
	if(a%4 && a%400){
		cout<<"This year is leap year: "<<endl;
	}
	else{
		cout<<"This year is not leap year: "<<endl;
	
}
	return 0;
}