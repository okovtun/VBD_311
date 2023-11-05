#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define LOGICAL_TYPES
//#define NUMERIC_TYPES
//#define VARIABLES
//#define CONSTANTS

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

#if defined VARIABLES
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
#endif

#ifdef CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250;
	//Константы всегда называют в заглавном регистре
	//https://legacy.cplusplus.com/doc/tutorial/constants/
	//http://www.softelectro.ru/ieee754.html
	cout << sizeof(5) << endl;
	cout << typeid(1024).name() << endl;
	55;		//Числовая константа типа 'int'
	55.;	//Числовая константа типа 'double'
	.25;	//Числовая константа типа 'double'
	.125f;	//Числовая константа типа 'float'
	55l;	//Числовая константа типа 'long'
	55ll;	//Числовая константа типа 'long long'
	55ull;	//Числовая константа типа 'unsigned long long'


	cout << typeid(55.f).name() << endl;
	double price;
	cout << typeid(price).name() << endl;
#endif // CONSTANTS

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