#include <iostream>
using namespace std;
int main(){
float x, y;
	cout<<"Enter length = ";
	cin >>x;
	
	cout<<"Enter breadth = ";
	cin>>y;
	
	if (x==y){
		cout<<"It is a square.\n";
	}
	else {
		cout<<"It's not a square, it's a rectangle.\n";
	}

return 0;
}
