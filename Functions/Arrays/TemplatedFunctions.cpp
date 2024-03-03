#include"Functions.h"

template<typename T>void Print(const T arr[], const int n)
{
	//¬ывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>T Sum(const T arr[], const int n)
{
	T sum = T();	//T() - значение по умолчанию дл€ шаблонного типа данных.
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}