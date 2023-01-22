#include <iostream>
using namespace std;
int main(){
	// row 2 / colum 3
	int x[2][3]={
		{1,5,6},
		{3,5,9}
	};
	
	for(int i = 0; i<2; ++i){
		for(int j =0; j<3; ++j){
			cin<<x[i][j]<<endl;
		}
	}
	
	cout<<"**********************";
	
	/*int x[2][3]={
		{1,5,6},
		{3,5,9}
	};
	
	for(auto  i : x){
		for(int j : i){
			cout<<j<<endl;
		}
	}*/
	
	return 0;
}
