/*
��Ӧ�����Լ�������ɵĵ�һ�� 25 �ֵ���Ŀ�����⻨�˺ܾã��þò���������⡣
��ʵ����ܼ򵥣�����д�ĺܸ��ӣ������������ǻ��Ǻܿ��ģ��Ͼ� AC������⻨�˺ܳ�ʱ�䡣
˼·�ܼ򵥣�ģ��һ�£����ѱ����ǵ�������Ϊ1.���ֻ��Ҫ��������Ȼ������Ϳ����ˡ�
��������һ�� C++ �е� sort ����ͷ�ļ� #include��Ȼ����Ҫ����һ���������
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
    return a>b; //�������У������Ϊreturn a>b����Ϊ����
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
