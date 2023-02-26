#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	cout << "Hello Controls!\n" << endl;

	int t;
	cout << "Введите температуру воздуха: \n\n"; cin >> t; cout << "\n";

	if (t > 0)
	{
		cout << "На улице тепло " << endl;
	}
	else
	{
		cout << "\nНа улице холодно " << endl;
	}
}
