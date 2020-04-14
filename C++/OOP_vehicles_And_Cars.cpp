#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
    int weight;
    int top_speed;
    long driven_km;
    Vehicle(int weight, int top_speed, long driven_km);
    void Drive(int journey);
    int InputWeight();
    int InputTopSpeed();
    long InputDrivenKm();
};

Vehicle::Vehicle(int Aw, int Ats, long Akm)
{
    weight = Aw;
    top_speed = Ats;
    driven_km = Akm;
}
void Vehicle::Drive(int journey)
{
    driven_km += journey;
}

int Vehicle::InputWeight()
{
    return weight;
}

int Vehicle::InputTopSpeed()
{
    return top_speed;
}
long Vehicle::InputDrivenKm()
{
    return driven_km;
}

class Car : public Vehicle 
{
	public:
	string brand;
	string model;
	string register_no;
	bool running;
	
	void turn_on();
	void turn_off();
	void check_up();
	
	Car(int vehicle_weight, int vehicle_speed, long vehicle_km, string car_brand, string car_model, string car_license, bool car_running);
};

Car::Car(int vehicle_weight, int vehicle_speed, long vehicle_km, string car_brand, string car_model, string car_license, bool car_running):
Vehicle(vehicle_weight, vehicle_speed, vehicle_km)
{
	brand = car_brand; 	
	model = car_model;
	register_no = car_license;
	running = car_running;
}

void Car::turn_on(){
	
	running = 1;
}

void Car::turn_off(){
	
	running = 0;
}

void Car::check_up(){
	
	cout << "car info:" << endl;
	cout << "brand:" << brand << endl;
	cout << "model:" << model << endl;
	cout << "Kilometres:" << driven_km << endl;
	cout << "weight:" << weight << endl;
	cout << "Top speed:" << top_speed << endl;
	cout << "License plate:" << register_no << endl;
	if (running == 1){
	cout << "car is running."<< endl;
	}
	else{
	cout << "car is not running."<< endl;
	}
}



int main()
{
    int weight, speed;
    long km;
    string brand, model, license;

    // Ask for car information from the user
    cout << "Input car brand: ";
    cin >> brand;

    cout << "Input car model: ";
    cin >> model;

    cout << "Input car license plate number: ";
    cin >> license;

    cout << "Input car weight: ";
    cin >> weight;

    cout << "Input car top speed: ";
    cin >> speed;

    cout << "Input distance traveled by car: ";
    cin >> km;
    cout << endl;
    Car carX(weight, speed, km, brand, model, license, 0);
    
    carX.check_up();
    carX.turn_on();
    carX.Drive(95);
    cout << endl;
    carX.check_up();
}
