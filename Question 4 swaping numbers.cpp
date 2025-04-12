#include<iostream>
using namespace std;
int main(){
	int a ,b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	cout<<"orignal value of a: "<<a<<endl<<"orignal value of b: "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"swap values of a: "<<a<<endl<<"swap value of b: "<<b;
	return 0;
	
}