#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, y, xp, xk, dx, R;

	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------" << endl;
	cout << "|" << setw(7) << "y" << " |" << endl;
	cout << "----------" << endl;

	x = xp;
	
	while (x <= xk)
	{
		if (x <= -1 - R)
			y = -x - 1 - R;
		else
			if (-1 - R < x && x <= -1)
				y = sqrt((R * R) -(x + 1) * (x + 1));
			else
				if (-1 < x && x <= 1)
					y = R;
				else
					if (1 < x && x <= 2)
						y = (2 * R) -(R * x) - x + 1;
					else
						y = -1;
		cout << "|" << setw(7) << setprecision(2) << y <<
			" |" << endl;
		x += dx;
	}

	cout << "----------" << endl;

	return 0;
}
