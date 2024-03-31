//Split
#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//.....
	//.....
	//.....
	//delete[] arr;


	FillRand(arr, n);
	Print(arr, n);

	//1) вычисляем размеры массивов:
	int even_count = 0;
	int odd_count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)even_count++;
		else odd_count++;
	}
	cout << "Количество четных элементов: " << even_count << endl;
	cout << "Количество нечетных элементов: " << odd_count << endl;

	//2) выделяем память под массивы:
	int* even_arr = new int[even_count];
	int* odd_arr = new int[odd_count];

	//3) распределяем значения по разным массивам:
	for (int i = 0, j = 0, k = 0; i < n; i++)
	{
		/*if (arr[i] % 2 == 0)even_arr[j++] = arr[i];
		else			odd_arr[k++] = arr[i];*/
		(arr[i] % 2 == 0 ? even_arr[j++] : odd_arr[k++]) = arr[i];
	}

	//4) выводим полученные массивы на экран:
	cout << "Even arr: "; Print(even_arr, even_count);
	cout << "Odd  arr: "; Print(odd_arr, odd_count);

	delete[] odd_arr;
	delete[] even_arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}