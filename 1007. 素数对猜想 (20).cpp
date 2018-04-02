#include <iostream>
#include <string>
#include <string.h> 
#include <set>
#include <map> 
#include <math.h>
using namespace std;

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
	int n;
	int count = 0;
	cin >> n;
	
	for (int i = 1; i <= n - 2; i ++) {
		if ( isS(i) && !isS(i+1) && isS(i+2) ) {
			count ++;
		}

	}	
	
	cout << count;
}
