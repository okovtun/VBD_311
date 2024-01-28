#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	unsigned short a = 5;
	cout << a << endl;
	cout << (unsigned short)~a << endl;
}

/*
-----------------------------
	~  NOT
	|   OR
	&  AND
	^  XOR
	<< SHL (Shift left)
	>> SHR (Shift right)
-----------------------------
	~=  NOT Assign
	|=   OR Assign
	&=  AND Assign
	^=  XOR Assign
	<<=
	>>=
-----------------------------
*/