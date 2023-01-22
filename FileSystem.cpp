#include <iostream> // i input o output
#include <fstream>
using namespace std;

int main(){
	
	char name[200];
	
	
	ofstream h;	// ofstream -> create file and write on him
	h.open(R"(C:\Users\m\Desktop\C++ & OOP\example.txt)");
	cout<<"Enter Your Name:";
	cin.getline(name, sizeof(name));
	h.write(name, sizeof(name));
	//ifstream h; // ifstream -> reading it from the file
	//fstream h; // ofstream + ifstream
	h.close();
	return 0;
}
