//DynamicMemory
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

template<typename T>T** Allocate(const int rows, const int cols);
template<typename T>void Clear(T** arr, const int rows);

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);
void FillRand(double** arr, const int rows, const int cols, int minRand = 0, int maxRand = 100);

template<typename T>void Print(const T arr[], const int n);
template<typename T>void Print(T** arr, const int rows, const int cols);

template<typename T>T* push_back(T arr[], int& n, const T value);
template<typename T>T* push_front(T arr[], int& n, const T value);

template<typename T>T* pop_back(T arr[], int& n);

template<typename T>T** push_row_back(T** arr, int& rows, const int cols);
template<typename T>T** pop_row_back( T** arr, int& rows, const int cols);

template<typename T>void push_col_back(T** arr, const int rows, int& cols);
template<typename T>void pop_col_back( T** arr, const int rows, int& cols);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef DYNAMIC_MEMORY_1
	int n = 5;
	cout << "Введите количество элементов: "; cin >> n;

	//1) Объявление динамического массива:
	double* arr = new double[n];
	//int* buffer = arr;

	//2) Обращение к элементам динамического массива:

	FillRand(arr, n);
	Print(arr, n);

	double value;
	cout << "Введите добавляемое значение: "; cin >> value;

	arr = push_back(arr, n, value);
	Print(arr, n);

	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);

	//3) Удаление динамического массива:
	delete[] arr;

	//Memory Leak  
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
	int rows;
	int cols;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;

	double** arr = Allocate<double>(rows, cols);

	///////////////////////////////////////////////////////////////////////
	///////		Использование двумерного динамического массива		///////
	///////////////////////////////////////////////////////////////////////

	FillRand(arr, rows, cols);
	Print(arr, rows, cols);

	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 100, 1000);
	Print(arr, rows, cols);

	arr = pop_row_back(arr, rows, cols);
	Print(arr, rows, cols);

	push_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	pop_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	Clear(arr, rows);
#endif // DYNAMIC_MEMORY_2

}

template<typename T>T** Allocate(const int rows, const int cols)
{
	///////////////////////////////////////////////////////////////////////
	///////		Объявление двумерного динамического массива			///////
	///////////////////////////////////////////////////////////////////////

	//1) Создаем массив указателей:
	T** arr = new T*[rows];
	//2) Выделяем память под строки:
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols] {};
	}
	return arr;
}
template<typename T>void Clear(T** arr, const int rows)
{
	///////////////////////////////////////////////////////////////////////
	///////		  Удаление двумерного динамического массива			///////
	///////////////////////////////////////////////////////////////////////

	//1) Сначала удаляем строки двумерного массива:
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % (maxRand - minRand) + minRand;	//обращение к элементам через арифметику указателей и оператор разыменования
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % (maxRand - minRand) + minRand;	//обращение к элементам через арифметику указателей и оператор разыменования
		arr[i] /= 100;
	}
}

void FillRand(int** arr, const int rows, const int cols, int minRand, int maxRand)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double** arr, const int rows, const int cols, int minRand, int maxRand)
{
	if (minRand > maxRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
			arr[i][j] /= 100;
		}
	}
}

template<typename T>void Print(const T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;		//обращение к элементам через оператор индексирования
	}
	cout << endl;
}
template<typename T>void Print(T** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}
template<typename T>T* push_back(T arr[], int& n, const T value)
{
	//1) Создаем буферный массив нужного размера:
	T* buffer = new T[n + 1];

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

	return arr;
}
template<typename T>T* push_front(T arr[], int& n, const T value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];
	}
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}

template<typename T>T* pop_back(T arr[], int& n)
{
	/*int* buffer = new int[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		buffer[i] = arr[i];
	}
	delete[] arr;
	n--;
	return buffer;*/
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

template<typename T>T** push_row_back(T** arr, int& rows, const int cols)
{
	T** buffer = new T*[rows + 1];
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr;
	buffer[rows] = new T[cols] {};
	rows++;
	return buffer;
}
template<typename T>T** pop_row_back( T** arr, int& rows, const int cols)
{
	T** buffer = new T*[--rows];
	delete[] arr[rows];	//удаляем из памяти последнюю строку двумерного массива
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}

template<typename T>void push_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
template<typename T>void pop_col_back( T** arr, const int rows, int& cols)
{
	cols--;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols] {};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
}