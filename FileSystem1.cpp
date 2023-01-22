#include <iostream> // i input o output
#include <fstream>
using namespace std;

int main(){
	//ofstream h;	// ofstream -> create file and write on him
	//fstream h; // ofstream + ifstream
	
	char name[200];
	
	
	ifstream h; // ifstream -> reading it from the file
	h.open(R"(C:\Users\m\Desktop\C++ & OOP\example.txt)");
	
	
	h.read(name, sizeof(name)); // h.read(name, sizeof(name)); or h >> name; 
	cout<<name;
	h.close();
	return 0;
}
