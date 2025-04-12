// Area of a Circle 
//Objective: Calculate the area of a circle given the radius. 
//Steps: 
//? Take the radius as input from the user. 
//? Store it in a float or double variable. 
//? Use the formula: area = p * r * r (you can use 3.14 for p). 
//? Print the calculated area. 
#include<iostream>

using namespace std;
int main(){
	float r ,py=3.14;
	double area;
	cout<<"enter your first calculation:\n";
	cin>>r;
    area=py*r*r;
	cout<<"area of circle:"<<area;
	
    return 0;
	
}