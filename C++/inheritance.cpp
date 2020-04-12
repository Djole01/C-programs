#include <iostream>
using namespace std;

class Calculator
{
	public:
	
	int Sum(int first, int second);
};
int Calculator::Sum(int first, int second)
{
	int sum =first + second;
	return sum;
}

class Printer : public Calculator 
{
	public:
	
	int first;
	int second;
	int sum;
	
	void Print();
};

void Printer::Print(){

	cout << "Give a first integer: " << endl;
	cin >> first;
	cout << "Give a second integer: " << endl;
	cin >> second;
	sum = Calculator::Sum(first, second);
	cout << "Sum: " << sum << endl;
}

int main()
{
	Printer object;
	object.Print();
}
