#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2

void main()
{
#ifdef WHILE_1
	setlocale(0, "");
	int n; //���������� ��������
	int i = 0; //������� �����
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i << "Hello\n";
		i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	setlocale(0, "");
	int n;
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << "\t";
	}
	cout << endl;
#endif // WHILE_2

	char key; //��� ���������� ����� ������� ��� ������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	} while (true);
}