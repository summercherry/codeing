#include <stdio.h>
// 定义hanoi函数，其中 n 表示一共有多少个圆盘
// a、b、c 分别代表起始柱、目标柱和中转柱。
void hanoi(int n, char a, char b, char c)
{
	// 平凡情况为只有一个盘子，即从 a 柱直接移动到 b 柱即可。
	if(n == 1) {
		printf("%c->%d->%c\n", a, n, b);
	}
	// 再来考虑其他有多个盘子的情况，
	// 需要先将 n-1 个盘子全部移动到中转柱 c ，
	// 再将最大的圆盘从起始柱 a 移动到目标柱 b ，
	// 后再将已经移动到中转柱上的 n-1 个盘子移动到目标柱 c 。
	// 注意这里由于我们用到的是递归算法，
	// 所以最开始移动的 n-1 个盘子都是按照从大到小的顺序
	// 依次摆放在中转柱上的。
	else {
		hanoi(n - 1, a, c, b);
		//这里注意需要根据题目的要求写输出。
		printf("%c->%d->%c\n", a, n, b);
		hanoi(n - 1, c, b, a);
	}
}

int main(){
	int n;
	char a, b, c;
	scanf("%d %c %c %c", &n, &a, &b, &c);
	hanoi(n, a, b, c);
	return 0;
}
