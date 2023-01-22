#include <iostream>
using namespace std;
int main(){
	
	int x[3]={};
	
	for(int i=0; i<3; i++){
		cout<<"Enter Element "<<i+1<<":";
		cin>>x[i];
	}
	
	for(int j=0; j<3;j++){
		cout<<"Element "<<j+1<<" = "<<x[j]<<endl;
	}
	
	cout<<"**********************************";
	
	/*int y[3]={5};
	
	for(int & s : y){
		cout<<"Enter Element:";
		cin>>s;
	}
	
	for(int r : l){
		cout<<r<<endl;
	}
	*/
	
	return 0;
}
