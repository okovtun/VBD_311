//ControlStructures
#include<iostream>
using namespace std;

//Комментарии - это код, который игнорируется компилятором.
//Строчный комментарий
/*
	Блочный комментарий
*/

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello controls" << endl;
	int temperature;
	cout << "Введите температуру воздуха: ";cin >> temperature;
	/*if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else	//в противном случае (иначе)
	{
		cout << "На улице холодно" << endl;
	}*/

	if (temperature > 60)
	{
		cout << "Вы на другой планете" << endl;
	}
	if (temperature > 35)
	{
		cout << "Очень жарко" << endl;
	}
	if (temperature > 25)
	{
		cout << "Жарко" << endl;
	}
	if (temperature > 15)
	{
		cout << "Тепло" << endl;
	}
	if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	if (temperature > -40)
	{
		cout << "Сильный мороз" << endl;
	}
	else
	{
		cout << "Капец" << endl;
	}
}


/*if (Condition1)
{
	....;
	code_1;
	....;
}
else if(Condition2)
{
	....;
	code_2;
	....;
}
......
......
else if (ConditionN)
{
	....;
	code_N;
	....;
}
else
{
	....;
	default_code;
	....;
}*/