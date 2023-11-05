#include<iostream>
using namespace std;

//#define LOGICAL_TYPES
//#define NUMERIC_TYPES

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined LOGICAL_TYPES
	cout << "DataTypes" << endl;
	cout << true << endl;
	cout << false << endl;
#endif

#if defined NUMERIC_TYPES
	cout << "int:\n";
	cout << sizeof(int) << endl;
	cout << INT_MIN << " ... " << INT_MAX << endl;
	cout << "\n--------------------------------------\n";

	cout << "long long:\n";
	cout << sizeof(long long) << endl;
	cout << "unsigned long long: " << 0 << " ... " << ULLONG_MAX << endl;
	cout << "  signed long long: " << LLONG_MIN << " ... " << LLONG_MAX << endl;
	cout << "\n--------------------------------------\n";

	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << "\n--------------------------------------\n";

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif

	int a = 0;		//Инициализация при объявлении
	cout << a << endl;
	double price;	//Объявление переменной
	price = 0;		//Инициализация после объявления
	double price_of_coffee;
	cout << "Введите стоимость кофе: "; 
	cin >> price_of_coffee;	//Инициализация вводом с клавиатуры
	int number_of_cups;
	cout << "Введите количество чашек: "; cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость покупки: " << total_price << endl;
}

/*
----------------------------------------------
Переменная (Variable) - это именованная область памяти, 
содержимое которой может изменяться В ПРОЦЕССЕ ВЫПОЛНЕНИЯ ПРОГРАММЫ.
Прежде чем использовать переменную ее нужно люъявить (создать)!!!
						
						type name;		//синтаксис объявления переменной
type - тип объявляемой переменной, он определяет три вещи:
	1. Сколько памяти переменная будет занимать;
	2. Какие значения она сможет принимать;
	3. Какие операции над ней можно выполнять;
----------------------------------------------
I	Логические типы: bool (Boolean) 1 Byte
	true	- 1
	false	- 0
----------------------------------------------
*/

/*
----------------------------------------------
identifier - это имя.
1. ABC...Zabc...z0123...9_;
2. _1stPlace;
3. Имена регистрозависимы;
4. using namespace, int, for, if, while;
----------------------------------------------
*/

/*
----------------------------------------------
Инициализация
----------------------------------------------
*/