//NULL_TerminatedLines
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
using namespace std;

int string_length(const char str[]);
char* to_upper(char str[]);
char* to_lower(char str[]);
char* shrink(char str[]);
bool is_palindrome(const char str[]);
bool is_int_number(const char str[]);
int to_int_number(const char str[]);

void main()
{
	//for (int i = 0; i < 256; i++)cout << i << "\t" << (char)i << endl;
	cout << 'a' - 'A' << endl;
	cout << (int)'ё' << endl;
	cout << (int)'Ё' << endl;
	setlocale(LC_ALL, "");
	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	//char str[] = "Hello";
	const int SIZE = 256;
	char str[SIZE] = "Аргентина манит негра";
	//char str[SIZE] = "Хорошо        живет    на   свете      Винни    Пух";
	cout << shrink(str) << endl;
	cout << "Строка " << (is_palindrome(str) ? "" : "НЕ ") << "палиндром" << endl;
	cout << "Введите строку: ";
	SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << str << endl;
	cout << "Размер строки: " << string_length(str) << endl;
	cout << "Строка в верхнем регистре: " << to_upper(str) << endl;
	cout << "Строка в нижнем  регистре: " << to_lower(str) << endl;
	cout << "Строка - " << (is_int_number(str) ? "" : "НЕ ") << "число" << endl;
	cout << to_int_number(str) * 2 << endl;
}

int string_length(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}

char* to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')str[i] -= ' ';
		if (str[i] >= 'а' && str[i] <= 'я')str[i] -= ' ';
		if (str[i] == 'ё')str[i] -= 16;
	}
	return str;
}
char* to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]);	//принятый символ возвращает в нижнем регистре, если он есть.
		//https://legacy.cplusplus.com/reference/cctype/tolower/
	}
	return str;
}
char* shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i + 1; str[j]; j++)str[j] = str[j + 1];
		}
	}
	return str;
}
char* remove_symbol(char str[], char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)str[j] = str[j + 1];
		}
	}
	return str;
}
bool is_palindrome(const char str[])
{
	bool is_palindrome = true;
	int n = strlen(str);
	char* buffer = new char[n + 1]{};
	strcpy(buffer, str);
	to_lower(buffer);
	remove_symbol(buffer, ' ');
	n = strlen(buffer);
	for (int i = 0; i < n / 2; i++)
	{
		if (buffer[i] != buffer[n - 1 - i])
		{
			is_palindrome = false;
			break;
		}
	}
	delete[] buffer;
	return is_palindrome;
}
bool is_int_number(const char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')return false;
	}
	return true;
}
int to_int_number(const char str[])
{
	int number = 0;
	if (is_int_number(str))
	{
		for (int i = 0; str[i]; i++)
		{
			number *= 10;
			number += str[i] - '0';
		}
	}
	return number;
}