#include<iostream>
using namespace std;

//#define WHILE_1
#define WHILE_2

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

	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
	cout << n << endl;
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