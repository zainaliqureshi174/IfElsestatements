#include <iostream>
using namespace std;
int main(){
int a, b, c;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	cout<<"Enter third number : ";
	cin>>c;
	if (a>b){
		if (a>c){
			cout<<"First number is the greatest among these three numbers.\n";}
		else if (a<c){
			cout<<"Third number is the greatest among these three numbers.\n";}}
	else if (b>a){
		if (b>c){
			cout<<"Second number is the greatest among these three numbers.\n";}
		else if (b<c){
			cout <<"Third number is the greatest among these three numbers.\n";}}
return 0;
}
