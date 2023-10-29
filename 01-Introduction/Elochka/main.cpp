#include <iostream>
using namespace std;

//ƒиректива #define (определить) создает макроопределение (макрос)
//#define что_заменить чем_заменить
#define offset "\t\t\t\t\t\t"
//offset - им€ макроса
//"\t\t\t\t\t\t" - значение макроса

#define ELOCHKA

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined ELOCHKA
	//если определено ELOCHKA,
	//то нижеследующий код будет виден компил€тору:
	cout << offset << "¬ лесу родилась елочка,\n";
	cout << offset << "в лесу она росла,\n";
	cout << offset << "зимой и летом стройна€\n";
	cout << offset << "зелена€ была\.\n\n";

	cout << offset << "ћетель ей пела песенку\n";
	cout << offset << "\"спи елочка бай-бай\.\"\n";
	cout << offset << "ћороз снежком укутывал\,\n";
	cout << offset << "\"смотри, не замерзай\"\.\n\n";

	cout << offset << "“русишка зайка серенький\n";
	cout << offset << "под елочкой скакал\.\n";
	cout << offset << "ѕорою волк\, сердитый волк\n";
	cout << offset << "рысцою пробегал\.\n\n";

	cout << offset << "ј снег по лесу частому\n";
	cout << offset << "под полозом скрипит\.\n";
	cout << offset << "Ћошадка мохнонога€\n";
	cout << offset << "торопитс€\, бежит\.";
#endif

}