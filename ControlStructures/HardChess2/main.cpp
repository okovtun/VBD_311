//HardChess2
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;	//Определяет размер как одной клетки, так и всей доски
	cout << "Введите размер доски: "; cin >> n;
	for (int i = 0; i < n*n; i++)
	{
		for (int j = 0; j < n*n; j++)
		{
			//ALU
			cout << (i / n & 1 ^ j / n & 1 ? "  " : "* ");
			//cout << (i / n % 2 == j / n % 2 ? "* " : "  ");
		}
		cout << endl;
	}
}