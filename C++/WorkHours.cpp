#include <iostream>
using namespace std;
 
int main()
{
	int days, i, j, k;
	float total, average, arr1[30];
	cout << "The program calculates the total amount of\nwork hours during a given time frame and the average work day length.\nHow many days:"<< endl;
	cin >> days;
	for(i=1;i<=days;i++)
	{
		cout << "Input hours of workday "<<i<<": ";
		cin >> arr1[i-1];
	}
	total = 0;
	for(j=0;j<days;j++)
	{
		total += arr1[j];
	}
	cout << "Total work hours: "<<total<< endl;
	average = total / days;
	cout << "Average work day length: "<<average<< endl;
	cout << "Inputted hours: ";
	for(k=0;k<days;k++)
	{
		cout << arr1[k] <<" ";
	}
	cout << endl;
}


