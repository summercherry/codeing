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
			printf("����%dֻ���Ӻ�%dֻ��", i, j);
			break;
		} else {
			flag = false;
		}
		if(flag)
			break;
	}
	if(flag == false)
		printf("������˼,����������Ӻͼ�������"); 
	return 0;
}
