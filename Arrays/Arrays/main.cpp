//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3, 5, 8 };
	//arr[1] = 1024;	//Обращение к элементу массива на запись
	//arr[3] = 3072;	//Обращение к элементу массива на запись
	//cout << arr[1] << endl;	//Обращение к элементу массива на чтение
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}