//Functions
#include<iostream>
using namespace std;

//Default arguments

int Sum(int a, int b, int c);		//Function declaration
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Sum(a, b, 5);		//Function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
}

int Sum(int a, int b)		//Function definition
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	//Difference - разность
	return a - b;
}
int Prod(int a, int b)
{
	//Product - Произведение
	return a * b;
}
double Quot(int a, int b)
{
	//Quotient - частное
	return (double)a / b;
}