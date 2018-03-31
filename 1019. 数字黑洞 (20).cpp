#include<stdio.h>
#include<algorithm>
using namespace std;

int a[10];

//µÝ¼õ 
bool cmp(int a,int b)
{
	return a > b;
}

void to_array(int n)
{
	for(int i = 1; i <= 4; i++)
	{
		a[i] = n%10;
		n = n/10;	
	}	
}

int main()
{
	int n;
	int max,min,result;
	scanf("%d",&n);
	to_array(n);
	while(true)
	{
		sort(a+1,a+5,cmp);
		min = a[4]*1000 + a[3]*100 + a[2]*10 + a[1];
		sort(a+1,a+5);
		max = a[4]*1000 + a[3]*100 + a[2]*10 + a[1];
		result = max -min;
		printf("%04d - %04d = %04d\n",max,min,result);
		if(result == 0 || result == 6174)
			break;
		else
		{
			to_array(result);
		}
	}
} 
