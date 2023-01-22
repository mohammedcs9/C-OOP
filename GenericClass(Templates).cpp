#include <iostream>
using namespace std;

template<class T, class E>
class B{
public:
	T x;
	E y;
	T sum(T a, E b){
		return a+b;
	}	
};

int main(){
	
	B<int, double> b1;
	b1.x = 10;
	b1.y = 5.4;
	cout<<b1.sum(b1.x, b1.y);
	
	B<string, bool> b2;
	b2.x = "mohmd";
	b2.y = false;
	
	return 0;
}
