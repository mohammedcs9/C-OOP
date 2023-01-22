#include <iostream>
using namespace std;

class MyClass{
	int x;
public:
	MyClass(int p_x); // prototype
	void print();
};

void MyClass::print(){
	cout<<"Hello"<<x<<endl;
}

MyClass::MyClass(int p_x) :x(p_x){}

int main(){
	
	MyClass m1 = MyClass(5);
	
	return 0;
}
