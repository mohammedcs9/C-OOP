#include <iostream>
using namespace std;
int main(){
		
		
		while(true){
			int degree;
		cout<<"Enter Your Degree:";
		cin>>degree;
		
		if(degree>100 || degree<0)
			break;
		
		if(degree>=90){
			if(degree>=95){
				cout<<"A+\n";
			}else{
				cout<<"A-\n";
			}
		}
		else if(degree>=80){
		if(degree>=95){
				cout<<"B+\n";
			}else{
				cout<<"B-\n";
			}
		}
		else if(degree>=70){
		if(degree>=95){
				cout<<"C+\n";
			}else{
				cout<<"C-\n";
			}
		}
		else if(degree>=60){
		if(degree>=95){
				cout<<"D+\n";
			}else{
				cout<<"D-\n";
			}
		}
		else if(degree>=50){
		if(degree>=95){
				cout<<"E+\n";
			}else{
				cout<<"E-\n";
			}
		}
		else{
		cout<<"F/n";
		}
		}
		
	while(true){
			int degrees;
		cout<<"2 Enter Your Degrees:";
		cin>>degrees;
		
		if(degrees>100 || degrees<0)
			break;
		
		char x = (degrees>=50) ? (degrees>=60) ? (degrees>=70) ? (degrees>=80) ? (degrees>=90) ? 'A':'B':'C':'D':'E':'F';
		cout<<x<<endl;
		}	

	return 0;
}
