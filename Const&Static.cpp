#include <iostream>
using namespace std;

class A{
	public:
		int x;
		static const int age=20;// member value  (static it is forbidden to write -> this)
		static void info(){// member function (static it is forbidden to write -> this)
			cout<<"A"<<endl;
			cout<<A::age<<endl;
		}
		void  print() {
			cout<<"Hello"<<endl;
		}
};
int main(){
	
	A a;
	A::info();//scope reselution
	a.print();
	
	return 0;
}
