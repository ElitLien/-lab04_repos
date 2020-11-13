#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "---------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "(1./2)*log((x+1)/(x-1))" << " |"
		<< setw(10) << "S" << " |"
		<< setw(4) << "n" << " |"
		<< endl;
	cout << "---------------------------------------------------" << endl;
	x = xp;
	
	while (x <= xk)
	{
		n = 0; // вираз залежить від умови завдання варіанту
		a = 1. / x; // вираз залежить від умови завдання варіанту
		S = a;
		do {
			n++;
			R = (2*n - 1) / ((2 * n +1)* pow(x ,2)); // вираз залежить від умови завдання варіанту
			a *= R;
			S += a;
		} while (abs(a) >= eps);
		cout << "|" << setw(5) << setprecision(2) << x << " |"
			<< setw(23) << setprecision(5) << (1. / 2) * log((x + 1) / (x - 1)) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(4) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "---------------------------------------------------" << endl;
	return 0;
}