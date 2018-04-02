#include <iostream>
#include <string>
#include <string.h> 
#include <set>
#include <map> 
using namespace std;

map<char, int> a;
map<char, int> b;
map<char, int> :: iterator it;

int main()
{
	string x, y;
	cin >> x >> y;
	
	for(int i = 0; i < x.size(); i ++) {
		a[ x[i] ]++;
	}
	
	for(int i = 0; i < y.size(); i ++) {
		b[ y[i] ]++;
	}
	
	int flag = 1;
	int count = 0;
	int acount = x.length() - y.length();
	for (it = b.begin(); it != b.end(); it++) {
		if ( a[it->first] < it->second ) {
			/*
			cout << "b的" << it->first << "是"<< it->second << endl;
			cout << "a的" << it->first << "是"<< a[it->first] << endl;*/
			count += it->second - a[it->first];
			flag = 0;
		} 
	}
	if (flag) {
		cout << "Yes " << acount;
	} else {
		cout << "No" << " " << count;
	}
}
