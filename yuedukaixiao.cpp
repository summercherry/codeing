#include <iostream>
using namespace std;
int N, M;
int expense[100005];

// 验证如果财政周期的花销上限是 mid，
// 是否能凑出合适的财政周期划分方法。
bool check(int mid)  {
	// 累积财政周期数。
	int period = 1;

	// 某财政周期总花销
	int periodExpense = 0;

	// 寻找财政周期分配过程
	for (int i = 0; i < N; i++){
		// 累计当前天在当前财政周期内的花销额。
		periodExpense += expense[i];

		// 如果大于 mid 值则增加一个月
		if(periodExpense > mid){
			periodExpense = expense[i];
			period++;
		}
	}	
	// 返回 true 表示凑出了少于等于 M 个财政月的方案，
	// mid 可以满足要求。
	return period <= M;
}

int main()
{
	// 全部 N 天的花销总额。
	int sum = 0;

	// N 天当中，花销最大的一天。
	int max = 0;

	cin >> N >> M;	//录入N，M

	// 录入月度开销数组，并且找到 N 天中花销最大值和这 N 天的花销总和
	for (int i = 0; i < N; i++){
		cin >> expense[i];
		// 计算全部 N 天的花销总额
		sum += expense[i];
		if (max < expense[i]) {
			// 找到单日花销最大值
			max = expense[i];
		}
	}

	// 二分查找过程，左开右闭。 
	// 每个财政周期的花销的最低极限，是单日花销的最大值。
	// 每个财政周期花销的最大值，是 N 天的总花销。
	// 采用左开右闭区间，l 应该先取可行值减一。
	int l = max - 1;
	int r = sum;
	int mid;
	for ( ; r - l > 1 ; ){
		// 因为是 (l,r] 左开右闭区间，循环到 r-l == 1 时候结束。
		mid = (l + r) / 2;
		if( check(mid) ) {
			// 如果 mid 做为财政周期的花销上限可行，则右边界左移。
			r = mid;
		} else {
			// 否则，mid 太小，左边界右移。
			l = mid;
		}
	}
	cout << r << endl;
	return 0;
}
