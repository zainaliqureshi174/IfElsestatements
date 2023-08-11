#include <iostream>
using namespace std;
int main (){
int a;
	cout<<"Enter a numnber : ";
	cin>>a;
		if ((a%5==0)&&(a%11==0)){
			cout<<"Number is divisible by 5 and 11.\n";}
		else if (a%5==0){
			cout<<"It is only devisible by 5.\n";}
		else if (a%11==0){
			cout<<"It is only divisible by 11.\n";}
		else {
			cout<<"It is niether divisible by 5 nor by 11.\n";}
return 0;
}
