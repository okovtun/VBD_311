//References
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//Reference - это переменная, которая хранит адрес другой переменной.
	int a = 2;
	int& ra = a;
	ra += 3;
	cout << a << endl;
}