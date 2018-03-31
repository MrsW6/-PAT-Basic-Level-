#include<stdio.h>
#include<string.h>

int main()
{
	int a[10000];
	memset(a,0,sizeof(a));
	int n,value,team,grade;
	int max_team,max_grade = -1;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d-%d%d",&team,&value,&grade);
		a[team] += grade;
		if(a[team] > max_grade)
		{
			max_grade = a[team];
			max_team = team;
		}
	}
	printf("%d %d",max_team,max_grade);
}
