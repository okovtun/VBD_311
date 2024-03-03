#include"Functions.h"

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
			arr[i][j] = minRand + rand() % (maxRand - minRand);
		}
	}
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