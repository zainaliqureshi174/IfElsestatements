#include <iostream>
using namespace std;
int main(){
char ch;
	cout<<"Enter a character : ";
	cin>>ch;
		if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z')){
			cout<<"It is an alphabet.\n";}
		else if ((ch>='0')&&(ch<='9')){
			cout<<"It is a digit.\n";}
		else {
			cout<<"It is a special character.\n";}

return 0;
}
