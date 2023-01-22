#include <iostream>
using namespace std;

void info(){
		int n;
		cout<<"Enter A Positive Number:";
		cin>>n;
		if (n<0) throw "Error";
		cout<<"Number = "<<n<<endl;
	}

int main(){
	
	while (true) {
		try {
			info();
			break;
		}
		catch (const char* s){
			cout<<s<<endl;
		}
	}
	
		
	return 0;
}








