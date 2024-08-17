#include <iostream>
using namespace std;
double function(double x)
{
	return (x * x + 3 * x - 2);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 1;
	double a = 0, b = 1, eps = pow(10, -8), c;
	cout << " eps = " << eps << endl;
	cout << " f(a)f(b) = " << function(a) * function(b) << " < 0" << endl;
	do
	{
		cout << (b - a) / 2 << endl;
		cout << " Шаг " << i << ": [" << a << "; " << b << "], c = ";
		c = (a + b) / 2;
		cout << c << ", f(c) = " << function(c) << ", f(a)f(c) = " << function(a) * function(c) << endl;
		if (function(a) * function(c) < 0)
			b = c;
		else
			a = c;
		i++;
	} while ((b - a) / 2 > eps);
	cout << " x = " << c;
	return 0;
}