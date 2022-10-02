#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define PLUSMINUS
//#define ROMBUS

void main()
{
	//setlocale(0, "");
	//int n;
	//cout << "¬ведите количество звЄздочек: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANGLE_2

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = i; j < n; j++)
	//	{
	//		cout << "* ";
	//		{
	//			for (int a = 0; a < n; a++)
	//			{
	//				cout << " ";
	//			}
	//		}
	//	}
	//	cout << endl;
	//}

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}

#endif // TRIANGLE_3

	//for (int i = 0; i < n; i += 2)cout << "+ ";
	//{
	//	for (int j = 1; j < n; j += 2)
	//	{
	//		cout << "- ";
	//	}
	//	cout << endl;
	//}

#ifdef PLUSMINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0) cout << "+ "; else cout << "- ";
			((i + j) % 2 == 0) ? cout << "+ " : cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}

#endif // PLUSMINUS

#ifdef ROMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i*2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = 0; j < (n-1-i)*2 ; j++)cout << " "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS

}