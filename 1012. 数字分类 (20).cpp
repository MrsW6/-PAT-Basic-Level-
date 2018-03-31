#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	int n;
	int flag = 1;
	int max = -1;
	double a4;
	int count2 = 0,count3 = 0, count4 = 0;
	int a[10], num[1005];
	memset(a,0,sizeof(a));
	scanf("%d",&n);
	for(int j = 1; j <= n; j++)
	{
		scanf("%d", &num[j]);
	}	
		for(int i = 1; i <= n; i++)
		{
			if((num[i]%2 == 0)&&(num[i]/5 == 0))
			{
				a[1] = a[1] + num[i];
			}
			
			if((num[i]/5 == 1))
			{
				count2++;
				a[2] = a[2] + flag*num[i];
				flag = -1;
			}
			
			if(num[i]/5 == 2)
			{
				count3++;
				a[3] = count3;
			}
			
			if(num[i]/5 == 3)
			{
				a[4] += num[i];
				count4++;
			}
			a4 = a[4]/count4;
			
			if(num[i]/4>max)
			{
				max = num[i];
			}
		}
	
	
	if(a[1] == 0){
		printf("N ");
	}	else{
		printf("%d ",a[1]);
	}
	
	if(count2 == 0){
		printf("N ");
	}	else{
		printf("%d ",a[2]);
	}
	
	if(a[3] == 0){
		printf("N ");
	}else{
		printf("%d ",a[3]);
	}
	
	if(a[4] == 0){
		printf("N ");
	}else{
		printf("%.2f ",count4);
	}
	
	if(max == -1){
		printf("N");
	}else{
		printf("%d ",max);
	}
 } 
 
 
 
 
 
 
 
 
