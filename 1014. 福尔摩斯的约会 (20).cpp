
/*
其实这个题题意不难， 但是计算起来挺麻烦的。首先输出结果需要三部分：星期，小时，分钟。星期小时和分钟比较容易计算。但是主要是小时和分钟怎么转换。

另外还有几个 C++ 内置的函数：需要调用 #include<cctype>
① isdigit(char a):参数必须是 char 类型，如果 '0'<a<'9'则为真
② isalpha(char c):判断是否为字母。
③ isalnum(char c):判断是否为字母或者数字。

字符的转换：'9' 如何转换成 int 类型的 9 呢？很简单：int a = '9' - '0';
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
	//小时 
	for (int i = flag; i <= length; i++) {
		if (a[i] == b [i] && (((a[i] >= 'A' && a[i] <= 'N') ) || (a[i] >= 48 && a[i] <= 57))) {
			c1 = a[i];
			break;		
		}
	}
	
	//分钟 
	int l = min(c.length(), d.length());
	for (int i = 0; i < l; i ++) {
		if (c[i] == d[i] && isalpha(c[i])) {
			c2 = i;
		}
	}
	
	int m = isdigit(c1) ? c1 - '0' : c1 - 'A' + 10;
	
	printf("%02d:%02d", m, c2);
}
