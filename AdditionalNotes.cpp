#include <iostream>
using namespace std;

class A{
	public:
		int x;
};
class B{
	public:
		A casing(){
			return {};
		}
};


int main(){
	
	B b;
	A a = b.casing();
	a.x = 10;
	cout<<a.x<<endl;
	
	return 0;
}
