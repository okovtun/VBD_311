#include <iostream>
using namespace std;

//��������� #define (����������) ������� ���������������� (������)
//#define ���_�������� ���_��������
#define offset "\t\t\t\t\t\t"
//offset - ��� �������
//"\t\t\t\t\t\t" - �������� �������

#define ELOCHKA

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined ELOCHKA
	//���� ���������� ELOCHKA,
	//�� ������������� ��� ����� ����� �����������:
	cout << offset << "� ���� �������� ������,\n";
	cout << offset << "� ���� ��� �����,\n";
	cout << offset << "����� � ����� ��������\n";
	cout << offset << "������� ����\.\n\n";

	cout << offset << "������ �� ���� �������\n";
	cout << offset << "\"��� ������ ���-���\.\"\n";
	cout << offset << "����� ������� ��������\,\n";
	cout << offset << "\"������, �� ��������\"\.\n\n";

	cout << offset << "�������� ����� ���������\n";
	cout << offset << "��� ������� ������\.\n";
	cout << offset << "����� ����\, �������� ����\n";
	cout << offset << "������ ��������\.\n\n";

	cout << offset << "� ���� �� ���� �������\n";
	cout << offset << "��� ������� �������\.\n";
	cout << offset << "������� ����������\n";
	cout << offset << "���������\, �����\.";
#endif

}