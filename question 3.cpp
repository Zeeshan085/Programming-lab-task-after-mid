#include<iostream>
using namespace std;
int main(){
 char operation;
 double num1 ,num2 ,result;
 
 cout<<"Enter your first number :\n";
 cin>>num1;
 cout<<"Enter your opreation : "<<endl;
 cin>>operation;
 cout<<"Enter your second number : ";
 cin>>num2;

 switch (operation){
	case '+':result=num1 + num2;
	cout<<"Result: "<<result;
	break;
		case '-': result=num1 - num2;
			cout<<"Result: "<<result;
			break;
			case '*': result=num1 * num2;
			
			if(num2 !=0){
					case '/': result=num1 / num2;
					cout<<"Result: "<<result;
			break;
			}
			else{
				cout<<"Invalid statement please write valid statment";
			}
			
				
}
	return 0;
}
