#include <iostream>
#include <string>
#include<cctype>
using namespace std;
int main()  
{
	int n;
	//不合格的个数 
	int count = 0;
	cin >> n;
	
	
	char JY[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	
	while (n--) {
		int flag = 1;
		int z[100];
		string s;
		cin >> s;
		
		for (int i = 0; i <= 16; i ++) {
			char c = s[i];
			
			z[i] = s[i] - '0';
			
			//cout << z[i]<< " ";
			
			if( !isdigit(c) ) {
				flag = 0;
				count++;
				cout << s << endl;
				break;
			}
		}
		
		if (flag == 1) {
			int h = (z[0]*7 + z[1]*9 + z[2]*10 + z[3]*5 + z[4]*8 + z[5]*4 + z[6]*2 + z[7]*1 + z[8]*6 +
		 	z[9]*3 + z[10]*7 + z[11]*9 + z[12]*10 + z[13]*5 + z[14]*8 + z[15]*4 + z[16]*2) % 11;
		 
		 	//cout << "h = " << h << endl;
		 
			 if (s[17] != JY[h]) {
		 		count ++;
		 		cout << s << endl;
		 	}
		}
	}
	
	if (count == 0) {
		cout << "All passed";
	}
}
