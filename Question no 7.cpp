#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter your number: "<<endl;
	cin>>a;
	if(a>=90){
		cout<<"your grade is A";
	}
	else if(a>=80){
		cout<<"You got grade B";
	}
	else if(a>=70){
		cout<<"You got grade c";
	}
	else{
		cout<<"You got grade D";
	}
	return 0;
}