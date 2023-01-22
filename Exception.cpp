#include <iostream>
using namespace std;
int main(){

	try {
		int n;
		cout<<"Enter A Positive Number:";
		cin>>n;
		if (n<0) throw "Error";
		cout<<"Number = "<<n<<endl;
	}
	catch (const char* s){
		cout<<s<<endl;
	}
		
	return 0;
}








