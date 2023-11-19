#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS	//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR		//2) Оператор присваивания
//#define INCREMENT_DECREMENT		//3) ++/--
//#define COMPOUND_ASSIGNMENTS		//4) Составные присваивания
#define COMPARISON_OPERATORS		//5) Операторы сравнения
#define LOGICAL_OPERATORS

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello operators" << endl;
	3;
	-3;		//Унарный минус
	8 - 3;	//Бинарный минус
	8 * 3;	//Бинарное умножение
	//*3;		//Оператор '*' может быть только бинарным
#ifdef ARITHMETICAL_OPERATORS
			//Unary: +, -;
//Binary:+, -, *, /, %;
//cout << 17 / 3 << endl;
//cout << 17 % 3 << endl;
	cout << 3. / 17 << endl;
	cout << 3. % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//	l-value = r-value;
//l-value - переменная слева
//r-value - выражение справа
//int a = 2;

//a = b + c * d - e / f;

//a + b + c + d

	int a, b, c;

	a = b = c = 0;

	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1.
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1.
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix decrement

	int j = ++i;
	cout << i << endl;
	cout << j << endl;
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
	/*
	------------------------------------
	a = a + b;		a += b;
	a = a - b;		a -= b;
	a = a * b;		a *= b;
	a = a / b;		a /= b;
	a = a % b;		a %= b;
	------------------------------------
	*/
#endif // COMPOUND_ASSIGNMENTS
	cout << (!true == false) << endl;
}

/*
-----------------------------
Expression - это синтаксичская конструкция, состоящая из операндов и операторов.
Операнды - это объекты (элеенты выражения), над которыми выполняется какое-то действие.
Операторы - это объекты (элементы выражения), которые показывают, 
			какие действия над операндами нужно выполнить.
-----------------------------
int
-----------------------------
*/