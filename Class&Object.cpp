#include <iostream>
using namespace std;

class Human{
	private:
		string name;
		int age;
	public:
		void setValues(string p_name, int p_age){
			this->name=p_name;
			this->age=p_age;
		}
		
		void getValues(){
			this->age= this->age+1;
			cout<<this->name<<endl;
			cout<<this->age<<endl;
		}
	
};

int main(){
	
	string name;
	int age;
	cout<<"Enter Your Name:";
	cin>>name;
	cout<<"Enter Your age:";
	cin>>age;
	Human h1;
	h1.setValues(name,age);
	h1.setValues("mohmmad", 21);
	h1.getValues();
	
	//cout<<h1.name<<endl;
	//cout<<h1.age<<endl;
	
	return 0;
}








