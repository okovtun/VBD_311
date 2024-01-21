#include<iostream>
using namespace std;
//#define Chess_1
//#define Chess_2
#define Pascals_triangle

void main()
{
	setlocale(LC_ALL, "");
#ifdef Chess_1
	int n = 0;
	cout << "¬ведите разамер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	cout << char(218);
	for (int i = 0; i < n; i++) cout << char(196) << char(196);
	cout << char(191) << endl;

	for (int i = 0; i < n; i++)
	{
		cout << char(179);

		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2) cout << char(219) << char(219);
			else cout << "  ";
		}
		cout << char(179) << endl;
	}
	cout << char(192);
	for (int i = 0; i < n; i++) cout << char(196) << char(196);
	cout << char(217) << endl;
#endif // Chess_1

#ifdef Chess_2
	int n = 0;
	system("mode con cols=168 lines=83");
	cout << "¬ведите размер доски: "; cin >> n;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int r = 0; r < n; r++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << (i % 2 == r % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}
		cout << endl;
	}
#endif // Chess_2

#ifdef Pascals_triangle
	int m = 20;
	system("mode con cols=168 lines=83");
	cout << "\t\t\t\t\t\t\t\tѕервые 21 строка треугольника ѕаскал€\n\n";
	for (int n = 0; n <= m; n++)
	{
		for (int j = n; j < m; j++)cout << "    ";
		for (int k = 0; k <= n; k++)
		{
			double a = 1, b = 1, c = 1;
			if (n == 0) a = 1;
			else for (int i = 1; a *= i, i < n; i++);// факториал n - строка
			if (k == 0) b = 1;
			else for (int i = 1; b *= i, i < k; i++);// факториал к - число
			if (n - k == 0) c = 1;
			else for (int i = 1; c *= i, i < n - k; i++);//факториал (n-k)
			if (int(a / (b * c)) / 10 == 0) cout << a / (b * c) << "       ";
			else if (int(a / (b * c)) / 100 == 0) cout << a / (b * c) << "      ";
			else if (int(a / (b * c)) / 1000 == 0) cout << a / (b * c) << "     ";
			else if (int(a / (b * c)) / 10000 == 0) cout << a / (b * c) << "    ";
			else if (int(a / (b * c)) / 100000 == 0) cout << a / (b * c) << "   ";
			else if (int(a / (b * c)) / 1000000 == 0) cout << a / (b * c) << "  ";


		}
		cout << endl << endl;

	}

#endif // Pascals_triangle

}