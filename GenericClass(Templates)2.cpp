#include <iostream>
using namespace std;

template<class T, class E>
T sum (T a, E b){
	return a+b;
}

int main(){

	cout<<sum<double, double>(3, 5.6)<<endl;
	cout<<sum<double, int>(3, 5.6);	
	
	return 0;
}
