#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int arr[] = {3, -7, -8, 9, -4, 2, 0};
		
	for_each(arr, arr+7, [](int n){
		cout<<n;
		if (n>0) cout<< " is positive " <<endl;
		else if (n<0) cout<< " is negative " <<endl;
		else cout<< " is zero " <<endl;
	});// &arr[0] or arr	
	
	return 0;
}








