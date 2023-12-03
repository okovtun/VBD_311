#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE
//#define FACTORIAL
//#define MULTIPLICATION_TABLE
#define PYTHAGORAS_TABLE

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
	int f = 1;
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