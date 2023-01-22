#include <iostream>
using namespace std;
//void <- don't Return type 
void sum(int x,int y){//(parameters)
	cout<<"Sum="<<x+y<<endl;
}
//main <- Return type 
int sum1(int z,int r){
	return z*r;
}

//main <- Return type 
int main(){
		
	//int x=4;
	//int y=5;
	
	//sum(x,y);
	sum(4,5);
	cout<<"************"<<endl;
	//int a = sum1(6,8);
	cout<<sum1(6,8);
	
	
	return 0;
}

