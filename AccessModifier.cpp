#include <iostream>
using namespace std;

class A{
	public:
		int x1;	
		int x2;	
		int x3;	
};
class B: private A{
	public:
		using A::x3;
};
int main(){
	
	B b;
	b.x3=10;
	

	return 0;
}








