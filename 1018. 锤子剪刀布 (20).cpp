#include <iostream>
#include <math.h>
using namespace std;

int win = 0, lose = 0, draw = 0;
int x, y;
char q, p;
int aC_win, aJ_win, aB_win;
int bC_win, bJ_win, bB_win;

int judge(char a, char b);

int judge(char a, char b) {
	
	if (a == b)
	{
		return 0;
	} 
	else 
	{
		if (a == 'C') 
		{
			if (b == 'B') 
			{
				bB_win++;
				return -1;
			} else {
				aC_win++;
				return 1;
			}
		}
		
		if (a == 'B') 
		{
			if (b == 'J') 
			{
				bJ_win++;
				return -1;
			} else {
				aB_win++;
				return 1;
			}
		}
		
		if (a == 'J') 
		{
			if (b == 'C') 
			{
				bC_win++;
				return -1;
			} else {
				aJ_win++;
				return 1;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	
	while(n--) {
		char a, b;
		cin >> a >> b;
		
		if (judge(a, b) == -1) {
			lose ++;
		} else if (judge(a, b) == 0) {
			draw ++;
		} else {
			win ++;
		}
		
		for (int i = 1; i <= 3; i++) {
			if (aJ_win >= x) {
				x = aJ_win;
				q = 'J';
			} 
			if (aC_win >= x) {
				x = aC_win;
				q = 'C';
			} 
			if (aB_win >= x) {
				x = aB_win;
				q = 'B';
			}
		}
		
		for (int i = 1; i <= 3; i++) {
			if (bJ_win >= y) {
				y = bJ_win;
				p = 'J'; 
			}  
			if (bC_win >= y) {
				y = bC_win;
				p = 'C';
			} 
			if (bB_win >= y) {
				y = bB_win;
				p = 'B';
			}
		}
	} 
	
	cout << win << " " << draw  << " " << lose << endl;
	cout << lose << " " << draw << " " << win << endl;
	cout << q << " " << p; 
	
}
