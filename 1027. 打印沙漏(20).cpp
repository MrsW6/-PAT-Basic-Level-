#include <iostream>
#include <string>
using namespace std;
int main() 
{
	int n;
	char c;
	cin >> n >> c;
	
	int cengShu = 0;
	int count = 1;
	int realCount;
	
	while (count <= n) {
		cengShu++;
		realCount = count;
		count = count + (count + 2) * 2;
	}
	
	int kongGe;
	int realCengShu = cengShu;
	
	//…œ∞Î≤„ 
	for (int i = cengShu; i >= 1; i--) {
		
		//¥Ú”°ø’∏Ò 
		int kongGe = cengShu - realCengShu;
		while(kongGe--) {
			cout << " ";
		}
		
		//¥Ú”°–«–«
		int q = 2 * realCengShu + 1;
		while (q -- ) {
			cout << c ;
		} 
		 
		cout << endl;
		realCengShu --;
	}
	
	while(cengShu--){
		cout << " ";
	}
	cout << c;
	
	int kongYu = 1;
	int yuyuecengshu = 1;
	while (yuyuecengshu < cengShu) {
		cout << " ";
	}
}

