#include<iostream>
using namespace std;

void Print(int arr[])
{
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "");
	int arr[] = { 3, 5, 8, 13, 21 };
	Print(arr);
	cout << "Hello" << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << typeid('+').name() << endl;
	cout << typeid("+").name() << endl;

	char str[] = "Hello";
	cout << str << endl;
}