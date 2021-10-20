#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, F, xp, xk, dx, c, a, b, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "c = "; cin >> c;
	cout << "b = "; cin >> b;
	cout << "a = "; cin >> a;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |";
	cout << "|" << setw(5) << "y" << " |";
	x = xp;
	while (x <= xk)
	{

		if (x < 0 && b != 0)
			F = F = a * pow(x, 2) + b;
		else
			if (x > 0 && b == 0)
				F = F = x - a / x - c;
			else
				F = x / c;
		y = F;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
