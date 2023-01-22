/*#include <iostream>
using namespace std;
//{body of function}
void add(int &x,int &y){
	x++;
	y++;
}

int main(){
	int x=3, y=4;
	add(x,y);
	add(x,y);
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	return 0;
}*/

/*#include <iostream>
using namespace std;
//{body of function}
void add(int *p){
	*p=*p+1;
	//++*p;
}

int main(){
	int x=3, y=4;
	//int *ptr=&x;
	add(&x);//reference
	add(&y);//reference
	//add(ptr);
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	return 0;
}*/
/*
//Default Argument 
#include <iostream>
using namespace std;
//{body of function}
int sum(int x=0, int y=0){
	return x+y;
}

int main(){
	
	sum(4);//(value name argument)
	
	return 0;
}
*/


//Inline Function
#include <iostream>
using namespace std;
inline void print(){
	cout<<"Hello"<<endl;
}
int main(){
	
	print();
	print();
	print();
	
	return 0;
}





