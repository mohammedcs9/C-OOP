#include <iostream>
using namespace std;
int main(){
	
	for(int i=1;i<=10;++i){
		if (i==6)break;
		cout<<"i="<<i<<endl;
		//break;
		//if (i==6)break;
	}
	
	for(int m=1; m<=10;++m){
		for(int j=1; j<=10;++j){
			cout<<m<<"*"<<j<<"="<<m*j<<endl;
		}
	}
	//*************************
	mohmmd:
	for(int x=1;x<=10;++x){
		if (x==6) goto x;
		cout<<"x="<<x<<endl;
	}
	x:
	for(int m=1; m<=10;++m){
		for(int j=1; j<=10;++j){
			cout<<m<<"*"<<j<<"="<<m*j<<endl;
		}
	}
	
	//**************************
	/*mohmd:
	for(int p=1;p<=10;++p){//infinite loop
		if (p==6) goto mohmd;
		cout<<"p="<<p<<endl;
	}*/
	
	//***********************
	a:
	for(int r=1; r<=10;++r){
		for(int h=1; h<=10;++h){
			if(r==5)break;
			cout<<r<<"*"<<h<<"="<<r*h<<endl;
		}
	}
	
	//***********************
	f:
	for(int g=1; g<=10;++g){
		for(int u=1; u<=10;++u){
			cout<<g<<"*"<<u<<"="<<g*u<<endl;
		}
		if(g==5)break;
	}
	
	//***********************
	q:
	for(int w=1; w<=10;++w){
		if(w==5)break;
		for(int z=1; z<=10;++z){
			cout<<w<<"*"<<z<<"="<<w*z<<endl;
		}
	}
	
	//***********************
	y:
	for(int c=1; c<=10;++c){
		if(c==5)continue;
		for(int b=1; b<=10;++b){
			cout<<c<<"*"<<b<<"="<<c*b<<endl;
		}
	}
	
	//***********************
	l:
	for(int q=1; q<=10;++q){
		for(int t=1; t<=10;++t){
			if(t==5)continue;
			cout<<q<<"*"<<t<<"="<<q*t<<endl;
		}
	}
	
	
	return 0;
}
