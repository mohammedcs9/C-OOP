#include <iostream>
using namespace std;
int main(){
	int x=0;
	++x; //pree
	x++; //post
	cout<<"x="<<x++<<endl;
	
	int z=0,y;
	y=z++;
	cout<<"y="<<y<<endl;
	
	int w=5,q;
	w--;
	cout<<"w="<<w<<endl;
	
	int h=5,u;
	h=h+5;
	cout<<"h="<<h;
	
	
	return 0;
}
