#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std; 
int main()
{
	setlocale(0, ".1251");
	double y, t, R;
	cout << "¬вед≥ть значенн€ t= ";
	cin >> t;
	cout << "¬вед≥ть значенн€ y= ";
	cin >> y;
	//R = (0.2 * x * x - x) / ((sqrt(3.) + x) * (1 + 2 * x)) +
		//2 * pow(x - 1, 3) / (pow(sin(x), 2) + 1);
	R =  pow(sin(2 * t + 1), 2) + 0.3 / log (t + y);
	cout << "–езультат R = " << R << endl;
	system("pause>>void");
	return 0;
}
  
