#include<iostream>
#include<conio.h>
using namespace std;

#define Enter 13
#define Escape 27

#define UpArrow		72
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77

void main()
{
	setlocale(LC_ALL, "");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;

		/*if (key == 'w' || key == 'W' || key == UpArrow)cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "Вправо" << endl;
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == Enter)cout << "Огонь" << endl;
		else if (key != Escape && key != -32)cout << "Error" << endl;*/

		switch (key)
		{
		case 'W':case 'w':case UpArrow:		cout << "Вперед" << endl;	break;
		case 'S':case 's':case DownArrow:	cout << "Назад"  << endl;	break;
		case 'A':case 'a':case LeftArrow:	cout << "Влево"  << endl;	break;
		case 'D':case 'd':case RightArrow:	cout << "Вправо" << endl;	break;
		case ' ':	cout << "Прыжок" << endl;	break;
		case Enter: cout << "Огонь" << endl;	break;
		case Escape:cout << "Выход" << endl;
		case -32:	break;
		default:	cout << "Error" << endl;
		}

	} while (key != Escape);
}