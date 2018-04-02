#include <iostream>
#include <string>
#include <string.h> 
#include <set>
#include <map> 
#include <math.h>
#define MAX  10005
using namespace std;

int s[1000000];

bool isS(int x);

bool isS(int x) {
	if (x == 1) {
		return true;
	}
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{	
	int x, y, count = 1, flag = 0;
	cin >> x >> y;
	
	for(int i = 2; i <= 1000000; i++) {
		
		if (count < 10004) {
			if (isS(i)) {
				s[count] = i;	
				count++;
			} 	
		} else {
			break;
		}
	}	
	for (int i = x; i <= y; i++) {
		cout << s[i];
		flag ++;
		if (flag == 10) {
			cout << "\n";
			flag = 0;
		} else if (i == y) {
			cout << "";
		} else {
			cout << " ";
		}
	}
}
