#include <cstdio>
int main()
{
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	bool flag = false;
	for (i = 0; i <= n; i++)
	{
		j = n - i; 
		if (i * 4 + j * 2 == m){
			flag = true;
			printf("共有%d只兔子和%d只鸡", i, j);
			break;
		} else {
			flag = false;
		}
		if(flag)
			break;
	}
	if(flag == false)
		printf("不好意思,笼子里的兔子和鸡成仙了"); 
	return 0;
}
