#include<iostream>
#include<conio.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define Escape 27
#define tab "\t"

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE
//#define FACTORIAL
//#define MULTIPLICATION_TABLE
//#define PYTHAGORAS_TABLE
//--------------------------------
//#define POWER
//#define ASCII
//#define Fibonacci_1

void main()
{
	setlocale(LC_ALL, "");

#if defined WHILE_1
	int i = 0;	//счетчик цикла
	int n;		//количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (++i < n)
	{
		cout << i << " Hello" << endl;
		//i++;
	}
#endif

#if defined WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
#endif // WHILE_2

#ifdef DO_WHILE
	char key;
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатия клавиши и возвращает ASCII-код нажатой клавиши.
		//Функция _getch() объявлена в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
	} while (key != Escape);
#endif // DO_WHILE

#ifdef FACTORIAL
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // FACTORIAL

#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << "*" << j << " = " << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE

#ifdef POWER
	double a;		//осноывние степени
	int n;			//показатель степени
	double N = 1;	//степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");	//включаем кодировку по умолчанию
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "");
	cout << "Вот и сказочке конец." << endl;
#endif // ASCII

#ifdef Fibonacci_1
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (long long int i = 0, a = 0, b = 1, c = a + b; i++ < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
#endif // Fibonacci_1

	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;	//предположем что число 'i' простое,
		//но это нужно проветрить:
		for (int j = 2; j < sqrt(i); j++)//sqrt - Sqare Root (Квадратный корень)
		{
			if (i%j == 0)
			{
				simple = false;
				break;	//ключевое слово 'break' прерывает текущую итерацию
				//и все последующие.
			}
		}
		if(simple)cout << i << tab;
	}
	cout << endl;
}

/*
--------------------------------
while - цикл с предусловием;
do...while - цикл с постусловием;
for - цикл на заданное число итераций;

Итерация - это однократное выполнение тела цикла.
Тело цикла - это код, который нужно зациклить (многократно выполнить)

--------------------------------
*/

/*while (condition)
{
	....;
	group-of-statements;
	....;
}*/

/*do
{
	....;
	group - of - statements;
	....;
} while (condition);*/

/*
----------------------------------
FOR - это цикл на заданное число итераций

for (counter; condition; expression)
{
	group - of - statements;
}
counter - это счетчик цикла.
Счетчик цикла - это переменная, которая считает сколько раз выполнился, или сколько раз будет выполнен цикл.

condition - это условие продолжения или завершения цикла.

expression - это выражение, которое изменяет счетчик.

group-of-statements - это тело цикла;
----------------------------------
*/