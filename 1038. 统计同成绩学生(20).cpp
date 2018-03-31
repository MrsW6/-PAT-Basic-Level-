#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n;
	int count[103];
	memset(count, 0, sizeof(count));
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		int grade;
		cin >> grade;
		count[grade] ++;		
	} 
	
	int m, g;
	cin >> m;
	
	while (m--) {
		cin >> g;
		if (m != 0) {
			cout << count[g] << " ";
		} else {
			cout << count[g];
		}
	}
}
