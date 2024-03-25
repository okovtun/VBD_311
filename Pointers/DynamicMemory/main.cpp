//DynamicMemory
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(const int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n = 5;
	cout << "Введите количество элементов: "; cin >> n;

	//1) Объявление динамического массива:
	int* arr = new int[n];

	//2) Обращение к элементам динамического массива:

	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение: "; cin >> value;

	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];

	//2) Копируем все значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	
	//3) Удаляем старый массив:
	delete[] arr;

	//4) Подменяем адрес старого массива адресом нового массива:
	arr = buffer;

	//5) Только после всего элтого можно добавить значение в конец массива:
	arr[n] = value;	
	
	//6) после добавления элемента в конец массива, количество его элементов увеличивается на 1
	n++;

	Print(arr, n);

	//3) Удаление динамического массива:
	///delete[] buffer;
	delete[] arr;

	//Memory Leak
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;	//обращение к элементам через арифметику указателей и оператор разыменования
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;		//обращение к элементам через оператор индексирования
	}
	cout << endl;
}