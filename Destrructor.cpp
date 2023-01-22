#include <iostream>
using namespace std;

class Rectangle{
	int *n;
public:
	Rectangle(int p_n){
		n = new int;
		*n = P_n;
		cout<< "Constructor of "<<*n<< endl;
	}	
	¬Rectangle(){ // Destructor
		cout<< "Destructor of "<<*n<< endl;
		delete n;
	}
};


int main(){
	Rectangle rt1 = {2};
	Rectangle rt2 = {4};
	
	/*int *ptr;
	ptr = new int;
	*ptr = 10;
	cout<<&ptr<<endl;
	cout<<*ptr<<endl;
	
	delete ptr;*/
	
	return 0;
}


