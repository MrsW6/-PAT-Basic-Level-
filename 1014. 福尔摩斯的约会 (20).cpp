
/*
��ʵ��������ⲻ�ѣ� ���Ǽ�������ͦ�鷳�ġ�������������Ҫ�����֣����ڣ�Сʱ�����ӡ�����Сʱ�ͷ��ӱȽ����׼��㡣������Ҫ��Сʱ�ͷ�����ôת����

���⻹�м��� C++ ���õĺ�������Ҫ���� #include<cctype>
�� isdigit(char a):���������� char ���ͣ���� '0'<a<'9'��Ϊ��
�� isalpha(char c):�ж��Ƿ�Ϊ��ĸ��
�� isalnum(char c):�ж��Ƿ�Ϊ��ĸ�������֡�

�ַ���ת����'9' ���ת���� int ���͵� 9 �أ��ܼ򵥣�int a = '9' - '0';
*/

#include <iostream>
#include <string>
#include <string.h> 
#include <set>
#include <map> 
#include <math.h>
#include <cctype>

using namespace std;

int min(int x, int y);

int min(int x, int y) {
	if (x >= y) {
		return y;
	} else {
		return x;
	}
}

int main()
{	
	int flag;
	string a, b, c, d;
	cin >> a >> b >> c >> d;
		
	int length = min(a.length(), b.length());	
	
	for (int i = 0; i <= length; i++) {
		if (a[i] == b [i] && (a[i] >= 'A' && a[i] <= 'G') ) {
			if (a[i] == 'A') {
				cout << "MON ";
			} else if (a[i] == 'B') {
				cout << "TUE ";
			} else if (a[i] == 'C') {
				cout << "WED ";
			} else if (a[i] == 'D') {
				cout << "THU ";
			} else if (a[i] == 'E') {
				cout << "FRI ";
			} else if (a[i] == 'F') {
				cout << "SAT ";
			} else if (a[i] == 'G') {
				cout << "SUN ";
			}
			
			flag = i + 1;
			break;
		}
	}
	
	char c1;
	int  c2;
	//Сʱ 
	for (int i = flag; i <= length; i++) {
		if (a[i] == b [i] && (((a[i] >= 'A' && a[i] <= 'N') ) || (a[i] >= 48 && a[i] <= 57))) {
			c1 = a[i];
			break;		
		}
	}
	
	//���� 
	int l = min(c.length(), d.length());
	for (int i = 0; i < l; i ++) {
		if (c[i] == d[i] && isalpha(c[i])) {
			c2 = i;
		}
	}
	
	int m = isdigit(c1) ? c1 - '0' : c1 - 'A' + 10;
	
	printf("%02d:%02d", m, c2);
}
