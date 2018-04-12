/*
这应该是自己独立完成的第一个 25 分的题目，读题花了很久，久久不能理解题意。
其实题意很简单，但是写的很复杂，哈哈哈哈但是还是很开心，毕竟 AC　这道题花了很长时间。
思路很简单：模拟一下，并把被覆盖的数都置为1.最后只需要遍历数组然后排序就可以了。
这里重温一下 C++ 中的 sort 排序，头文件 #include，然后需要定制一下排序规则
*/ 

#include <iostream>
#include <algorithm>
using namespace std;

int a[99999];
int b[101];
int k = 0;
int c[101];
int m = 0;

bool compare(int a,int b)
{
    return a>b; //升序排列，如果改为return a>b，则为降序
}

int main()
{
	int n;
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		b[k] = x;
		k++;
		while (x != 1) 
		{
			if (x % 2 == 0)
			{
				x /= 2;
				if (x != 1)
					a[x] = 1;
			} 
			else
			{
				x = (3 * x + 1) / 2;
				if (x != 1)
					a[x] = 1;
			}
		}		
	}
	
	for (int i = 0; i < k; i++) {
		if (a[b[i]] == 0) {
			c[m] = b[i];
			m++;
		}
	}
	sort(c, c + m, compare);
	for (int i = 0; i < m; i ++) {
		if (i == m-1)
			cout << c[i];
		else
			cout << c[i] << " ";
	}
}
