#include<iostream>
using namespace std;
int main(){
 int i ,o ,p;
 cout<<"Enter first number: "<<endl;
 cin>>i;
 cout<<"Enter second  number: "<<endl;
 cin>>o;
 cout<<"Enter third  number: "<<endl;
 cin>>p;
 cout<<"the largest number between"<<i<<ends<<"and"<<o<<ends<<"and"<<p<<ends<<"is"<<endl;
 if(i>p&&i>o){
 	cout<<"i is the largest number: "<<i;
 }
  else if(o>p&&o>i){
 	cout<<"o is the largest number: "<<o;
 }
 else{
 	cout<<"p is the largest number: "<<p;
 }
 return 0;
}