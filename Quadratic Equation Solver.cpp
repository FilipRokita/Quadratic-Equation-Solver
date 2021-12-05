//Quadratic Equation Solver
//05.11.2020

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

float a, b, c, x1, x2, d;

void menu()
{
	cout << "Funcja kwadratowa to ax^2 + bx + c = 0" << endl;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
}

void solve()
{
	d = (b * b) - (4 * a * c);
	if (d >= 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << endl;
		cout << "Pierwszy x to: " << x1 << endl;
		cout << "Drugi x to: " << x2 << endl;
	}
	else
	{
		d = d * (-1);
		cout << endl;
		cout << "Nie da sie obliczyc. Delta mniejsza od zera!" << endl;
	}
}


int main()
{
	system("title Quadratic Equation Solver");
	for (;;)
	{
		menu();
		solve();

		cout << endl;
		cout << endl;
		cout << "Kliknij dowolny przycisk aby kontynuowac." << endl;

		system("pause >nul");
		system("cls");
	}
	return 0;
}