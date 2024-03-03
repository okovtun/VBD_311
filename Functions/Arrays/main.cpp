//Arrays
#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------------------------\n"

const int ROWS = 3;
const int COLS = 5;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template<typename T>void Print(const T arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(const T arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int i_SIZE = 5;
	int i_arr[i_SIZE];

	FillRand(i_arr, i_SIZE);
	Print(i_arr, i_SIZE);
	cout << "Сумма элементов массива: " << Sum(i_arr, i_SIZE) << endl;
	cout << delimiter << endl;

	const int d_SIZE = 8;
	double d_arr[d_SIZE];
	FillRand(d_arr, d_SIZE);
	Print(d_arr, d_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, d_SIZE) << endl;
	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	//Заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
		//Функция rand() возвращает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = minRand + rand() % (maxRand-minRand);
		}
	}
}

template<typename T>
void Print(const T arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

template<typename T>
T Sum(const T arr[], const int n)
{
	T sum = T();	//T() - значение по умолчанию для шаблонного типа данных.
	for (int i = 0; i < n; i++)sum += arr[i];
	return sum;
}