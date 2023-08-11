#include <iostream>
using namespace std;
int main (){
char ch;
	cout<<"Enter an alphabet to check it is a vowel or a consonent : ";
	cin>>ch;
	if ((ch=='A')||(ch=='a')||(ch=='E')||(ch=='e')||(ch=='I')||(ch=='i')||(ch=='O')||(ch=='o')||(ch=='U')||(ch=='u')){
		cout<<"It is a vowel.\n";}
	else {
		cout <<"It is a consonent.\n";}
return 0;
}
