#include <iostream>
using namespace std;
int N, M, P;
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
	int tmp;
	// N 天当中，花销最大的一天。
	int max = 0;

	cin >> N >> M ;	//录入N，M

	// 录入月度开销数组
	for (int i = 0; i < N; i++){
		cin >> expense[i];
	}
	//录入最大开销上限 
	cin >> P;
	for (int i = 0;i < P; i++){
		cin >> tmp;
		if ( check(tmp) ){
		cout << "true" << endl;
		} else {
		cout << "false" << endl;
		}
	}
	
	return 0;
}
