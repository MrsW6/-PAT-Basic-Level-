#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct node
{
	double count;
	double sell;
	//µ¥¼Û 
	double price;
}a[1005];
bool cmp(node a,node b)
{
	return a.price > b.price;
}
int main()
{
	int n;
	double d;
	double lirun = 0; 
	scanf("%d %lf",&n,&d);
	for(int i = 1; i <= n; i++)
	{
		scanf("%lf",&a[i].count);
	}
	for(int i = 1; i <= n; i++)
	{
		scanf("%lf",&a[i].sell);
		a[i].price = a[i].sell / a[i].count;
	}
	sort(a+1,a+n+1,cmp);
	for(int i = 1; i <= n; i++)
	{
		if(a[i].count >= d)
		{
			lirun += a[i].price * d;
			break;
		}
		else
		{
			lirun += a[i].sell;
			d -= a[i].count;
		}
	}
	printf("%.2f\n",lirun);
}
