#include"Functions.h"

template<typename T>void Print(const T arr[], const int n)
{
	//����� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>T Sum(const T arr[], const int n)
{
	T sum = T();	//T() - �������� �� ��������� ��� ���������� ���� ������.
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}