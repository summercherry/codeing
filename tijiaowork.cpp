#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

struct Task {
	int a;  //第 i 张试卷中会做的题目数量
	int b;  //第 i 张试卷题目的总数量
	double score;
} task[1000];

bool compare(Task m, Task n){
	return m.score < n.score;	
}

int main() {
	int n, k, i, j;
	//数据读入 
	cin >> n >> k;
	for (i = 0; i < n; i++)
		cin >> task[i].a;
	for (i = 0; i < n; i++)
		cin >> task[i].b;

	// 目标平均分的左边界和右边界
	double lb = 0, ub = 1;

	for(; ub-lb > 0.001;) {
		double x = (lb+ub)/2;	
		
		for (i = 0; i < n; i++) 
			task[i].score = task[i].a - task[i].b * x;
		
//		// 选择排序 
//		for(i = 0; i < n; ++i) {
//			int t = 0; 
//			for(j = 1; j < n - i; ++j) {
//				if(task[t].score < task[j].score) {
//					t = j;
//				}
//			}
//			Task tmp = task[t];
//			task[t] = task[n - i - 1];
//			task[n - i - 1] = tmp;
//		}
		sort(task, task + n, compare);
		
		// 验证答案是否满足 
		double total = 0;
		for (j = k; j < n; j++) {
			// 累计每份作业对富裕正确答题数的贡献
			total += task[j].score;
		}
		if (total >= 0) lb = x;
		else ub = x;
	}
	
	// 统计最终试卷 
	double num = 0, all = 0;
	for(i = k; i < n; ++i) {
		num += task[i].a;
		all += task[i].b;
	}
	
	// 四舍五入 
	cout << int( 100 * num / all + 0.5) << endl;
	return 0;
}

