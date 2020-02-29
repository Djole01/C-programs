#include <iostream>
using namespace std;

int main()
{
	cout << "Program calculates the test grade average.\nFinish inputting with a negative number." <<endl;
	
	
	// for loop in a while (n > 0) loop,
	// j = 0;    // number of elements
	// sum = 0; // sum of the grades
	// if n < 11 and n > 3, 
	//   j++
	//   sum =+ n;
	// 
	int j = 0;
	float inputNumber, sum, averageGrade;
	while (inputNumber > 0)
	{
		cout << "Input grade (4-10) ";
		cin >> inputNumber;
		if((inputNumber > 3)&&(inputNumber < 11))
		{
			j++;
			sum += inputNumber;
		}
	}
	averageGrade = sum / j;
	cout << "You inputted " <<j<< " grades."<< endl;
	cout << "Grade average: " <<averageGrade<< endl;


return 0;
}
