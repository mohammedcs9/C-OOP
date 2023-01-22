#include <iostream>
#include <functional>
using namespace std;

//int sum(int a, int b, function<int(int, int)> y){
//	return y(a, b); // add(3, 4)
//}

//int add(int x, int y){return x+y;}

int main(){
	
	auto sum2 = [](int a, int b, function<int(int, int)> y){return y(a, b);};
	
	//cout<< sum(3, 4, add)<< endl;
	cout<< sum(3, 4, [](int x, int y){return x+y;})<< endl;
	
	return 0;
}

//https://phoenixnap.com/kb/linux-commands-cheat-sheet#directory-navigation
