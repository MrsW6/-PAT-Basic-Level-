#include <iostream>
#include <string>
using namespace std;
int main() 
{
	int n;
	char c;
	cin >> n >> c;
	
	if (n <= 6)
	{
		cout << c << endl;
		cout << n - 1;
	}
	else
	{
		//���ж��м���
	
		//xΪ�����������Ǽ������� 
		int x = 1;
		//count��һ�����ٸ����� 
		int count = 1;
		//�ϲ�����
		int h = 0; 
		int realCount = 1;
		while (count <= n) {
			h++;
			x += 2;
			realCount = count;
			count = count + (x + 2) * 2;
		} 
		//cout << "x is " << x << " h is " << h << " realCount is " << realCount;
		
		//�ϰ�� 	
		//����ǰ��ո��� 
		int kgs = 0;
		//i����ÿһ�е������� 
		int i = x;
		while (i >= 3) {
			int xnkgs = kgs;
			while(xnkgs--) {
				cout << " ";
			}
			kgs++;
			
			int m = i;
			while(m--) {
				cout << c;
			}
			cout << endl;
			i = i - 2;
		}
		
		//�м������
		int xnh = h;
		while(xnh--) {
			cout << " ";
		}
		cout << c << endl;
		
		//�°��
		int xxnh = h;
		
		int q = 3;
		int xxxnh = h;
		while(xxnh--) {
			
			xxxnh--;
			int mh = xxxnh;
			while(mh--) {
				cout << " ";
			}
			
			
			for(int i = 1; i <= q; i++) {
				cout << c;
			}
			cout << endl;
			q += 2;
		}
		int rrr;
		rrr = 2 * h * (h + 2) + 1;
		cout << n - rrr;
		}
}

