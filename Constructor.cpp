#include <iostream>
using namespace std;
class Human{
	private:
		int age;
	public:
	Human(){ //Empty Constructor
		this->age=0;
		cout<<"Age="<<this->age<<endl;
	}	
	Human(int p_age){ //Parametrize Constructor
		this->age=p_age;
		cout<<"Age="<<this->age<<endl;
	}
	Human(int q,int a){ //Parametrize Constructor
		cout<<"Sum="<<q+a<<endl;
	}
	Human(int h,int k,int y){ //Parametrize Constructor
		cout<<"Sum="<<h+k+y<<endl;
	}
	void sum(int x, int y){// method overloading same function (function inside class it's called method)
		cout<<"Sum="<<x+y<<endl;
	}
	void sum(double x, double y){// method overloading same function (function inside class it's called method)
		cout<<"Sum="<<x+y<<endl;
	}
	void sum(int d, int r, int z){// method overloading same function (function inside class it's called method)
		cout<<"Sum="<<d+r+z<<endl;
	}
	
};
int main(){
	
	Human h1 = Human();
	Human h2 = Human(21);
	Human h3 = Human(2,1);
	Human h4 = Human(4,6,7);
	h1.sum(4,5);
	h1.sum(4.5,5.6);
	h1.sum(4,9,6);
	
	return 0;
}








