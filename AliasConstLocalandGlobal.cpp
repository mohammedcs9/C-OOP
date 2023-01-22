#include <iostream>
using namespace std;
int z=9;//global variable
int main(){
	
	/*const double pi=3.14;
	
	int x=5;
	const int& y=x;//const no change
	
	x=10;
	//y=50; 
	 
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	*/
	
	cout<<"**************************="<<endl;
	
	//local variable
	
	{
		int z=2;
		cout<<"z="<<z<<endl;//local variable
		cout<<"z="<<::z<<endl;// ::z <- global variable
	}
	cout<<"z="<<z<<endl; 
	return 0;
}
