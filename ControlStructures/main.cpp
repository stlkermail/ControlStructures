#include<iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	cout << "Hello Controls!\n" << endl;

	int t;
	cout << "������� ����������� �������: \n\n"; cin >> t; cout << "\n";

	if (t > 0)
	{
		cout << "�� ����� ����� " << endl;
	}
	else
	{
		cout << "\n�� ����� ������� " << endl;
	}

}
