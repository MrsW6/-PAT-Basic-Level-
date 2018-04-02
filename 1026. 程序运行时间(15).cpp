#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	double c = (b - a)*1.0 / 100;
	
	int d = round(c);
//	printf("%lf\n", c);
//	cout << d << endl;
	
	int hh = 0, mm = 0, ss = 0;
	hh = d / 3600;
	mm = (d - (hh * 3600)) / 60;
	ss = d - hh * 3600 - mm * 60;
	printf("%02d:%02d:%02d", hh, mm, ss);
}
