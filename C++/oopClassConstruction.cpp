#include <iostream>
#include <string>
using namespace std;

class Dog {
	public:
    int age;
    string name, race, voice;
	Dog(int new_age, string new_name, string new_race, string new_voice); // constructor has no return type
    void PrintInformation();
	string Bark();
} ;

Dog::Dog(int new_age, string new_name, string new_race, string new_voice){

	age = new_age;
	name = new_name;
	race = new_race;
	voice = new_voice;
	
}

void Dog::PrintInformation(){
	
	cout << "Name: " << name << "\nAge: " << age << "\n Race: " << race << endl;

}

string Dog::Bark(){

	return voice;

}

int main()
{
	Dog buffy(2, "Buffy", "Bulldog", "Hau!!!");
	buffy.PrintInformation();
	cout << "Dog says: " << buffy.Bark();
}
