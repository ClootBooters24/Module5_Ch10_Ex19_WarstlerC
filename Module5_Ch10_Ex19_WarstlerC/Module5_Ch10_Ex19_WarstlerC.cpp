#include<iostream>
#include <iomanip>
using namespace std;

//Function Declaration
void getBalance(int, float, float);


int main()
{
	int deposit, t, i;
	float minRate, maxRate;
                                          
	cout << "Enter Deposit Amount : ";
	cin >> deposit;
	cout << "Enter Minimum Rate (in decimal form) : ";
	cin >> minRate;
	cout << "Enter Minimum Rate (in decimal form) : ";
	cin >> maxRate;

	//Call to function getBalance
	getBalance(deposit, minRate, maxRate);
	return 0;
}

void getBalance(int dep, float min, float max)
{
	float rate, year1total, year2total, year3total;

	//Loop will repeat until rate hits max
	for (rate = min; rate <= max; rate = rate + 0.01)
	{
		cout << "Rate " << min * 100 << "% : " << endl;

		year1total = dep + (dep * rate * 1);
		cout << "Year " << 1 << " : $" << year1total << endl;

		year2total = year1total + (year1total * rate * 1);
		cout << "Year " << 2 << " : $" << year2total << endl;

		year3total = year2total + (year2total * rate * 1);
		cout << "Year " << 3 << " : $" << year3total << endl;
	}
}