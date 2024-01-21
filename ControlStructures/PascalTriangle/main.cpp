#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите высоту треугольника: "; cin >> n;
	long long int fi = 1;
	int width = 8;
	for (int i = 0; i <= n+1; i++)
	{
		cout.width((width)/2);
		cout << "";
	}
	cout << "\b";
	cout << 1 << endl;
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		fi *= i;
		long long int fj = 1;
		for (int j = 0; j < n - i; j++)
		{
			cout.width(width/2);
			cout << "";
		}
		cout.width(width);
		cout << 1;
		for (int j = 1; j <= i; j++)
		{
			fj *= j;
			long long int fk = 1;
			for (int k = 1; k <= i - j; k++)
			{
				fk *= k;
			}
			int bin = fi / fj / fk;
			cout.width(width);
			cout << bin;
		}
		cout << endl;
		cout << endl;
	}
}