#include<iostream>
using namespace std;

//#define LOGICAL_TYPES
#define NUMERIC_TYPES

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